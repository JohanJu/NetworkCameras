package client;

import java.io.IOException;
import java.net.Socket;
import java.util.Iterator;
import java.util.LinkedList;

public class Monitor {
	public static final byte AUTO = 0;
	public static final byte MOVIE = 1;
	public static final byte IDLE = 2;
	public static final byte ASYNC = 3;
	public static final byte SYNC = 4;

	Socket[] sockets = new Socket[2];
	LinkedList<PicData> buffer = new LinkedList<PicData>();

	private boolean userChangedMode = false;
	private byte modeServer = AUTO; // AUTO - MOVIE - IDLE
	private byte modeClient = SYNC; // SYNC - AYSNC
	private int[] port;
	private String[] hosts;
	private long oldTime = 0;
	
	int camTriggeredMovieMode;
	boolean triggMovieMode = false;

	public Monitor(int[] port, String[] hosts) {
		this.port = port;
		this.hosts = hosts;
		createConnection();
	}

	public void createConnection() {
		try {
			sockets[0] = new Socket(hosts[0], port[0]);
			sockets[1] = new Socket(hosts[1], port[1]);
		} catch (IOException e) {
			e.printStackTrace();
		}

	}

	public synchronized PicData getPicture() {
		while (buffer.isEmpty()) {
			try {
				wait();
			} catch (InterruptedException e) {
			}
		}
		PicData pd = buffer.removeFirst();
		if (modeClient == SYNC) {
			long time = pd.timeStamp + 500;
			long stime = System.currentTimeMillis();
			while (time > stime) {
				try {
					wait(time - stime);
					stime = System.currentTimeMillis();
				} catch (InterruptedException e) {
				}
			}
			if (buffer.isEmpty()) {
				modeClient = ASYNC;
			} else {
				if (buffer.getFirst().timeStamp - time > 200) {
					modeClient = ASYNC;
				}
			}
		} else {
			if (pd.timeStamp - oldTime < 200) {
				modeClient = SYNC;
			}
		}
		oldTime = pd.timeStamp;
		
		
		return pd;
	}

	/*
	 * User changed mode via button in GUI
	 */
	public synchronized void updateMode(byte mode) {
		if (0 <= mode && mode <= 3) {
			this.modeServer = mode;
			userChangedMode = true;
			System.out.println("changed mode in monitor to: " + modeServer);
			notifyAll();
		} else {
			this.modeClient = mode;
		}
	}

	public synchronized byte getMode() throws InterruptedException {
		while (!userChangedMode) {
			wait();
		}
		userChangedMode = false;
		return modeServer;
	}

	public synchronized void add(PicData data) {
		long time = data.timeStamp;
		if (buffer.isEmpty()) {
			buffer.add(data);
		} else {
			int i = buffer.size();
			Iterator<PicData> x = buffer.descendingIterator();
			while (x.hasNext()) {
				if (time > x.next().timeStamp) {
					break;
				}
				i--;
			}
			buffer.add(i, data);
		}
		// for (int i = buffer.size() - 1; i > 0; i--) {
		// if (time > buffer.get(i).timeStamp) {
		// buffer.add(i - 1, data);
		// break;
		// }
		// }
		// }
		// buffer.add(data);
		// System.out.println("add");
		
		if(data.mode == MOVIE && modeServer == AUTO) {
			camTriggeredMovieMode = getCamNbr(data.port);
			userChangedMode = true;
			modeServer = MOVIE;
		}
		notifyAll();
	}

	public synchronized int getCamNbr(int portNbr) {
		for (int i = 0; i < port.length; ++i) {
			if (portNbr == port[i]) {
				return i;
			}
		}
		// Ska ej komma hit...
		return 10;
	}
}
