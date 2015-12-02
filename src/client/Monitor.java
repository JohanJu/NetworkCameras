package client;

import java.io.IOException;
import java.net.Socket;
import java.util.LinkedList;

public class Monitor {
	public static final byte AUTO  = 0;
	public static final byte MOVIE   = 1;
	public static final byte IDLE = 2;
	public static final byte ASYNC = 3;
	public static final byte SYNC = 4;
	
	Socket[] sockets = new Socket[2];
	LinkedList<PicData> buffert = new LinkedList<PicData>();
	
	private boolean userChangedMode = false;
	private byte modeServer = AUTO;			// AUTO - MOVIE - IDLE
	private byte modeClient = SYNC;			// SYNC - AYSNC
	
	private int[] port;
	private String[] hosts;
	
	public Monitor(int[] port,String[] hosts) {
		this.port = port;
		this.hosts = hosts;
		createConnection();
	}
	
	public void createConnection(){
		try {
			sockets[0] = new Socket(hosts[0], port[0]);
			sockets[1] = new Socket(hosts[1], port[1]);
		} catch (IOException e) {
			e.printStackTrace();
		}	
		
	}
	
	
	
	public synchronized PicData getPicture() {
		while(buffert.isEmpty()) {
			try {
				wait();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
//		System.out.println("Pop Pic");
		return buffert.removeFirst();
	}
	
	/*
	 * User changed mode via button in GUI
	 * */
	public synchronized void updateMode(byte mode) {
		if(0 <= mode && mode <= 3 ) {
			this.modeServer = mode;
			userChangedMode = true;
			notifyAll();
		} else {
			this.modeClient = mode;
		}
	}
	
	public synchronized byte getMode() throws InterruptedException{
		while(!userChangedMode){
			wait();
		}
		userChangedMode = false;
		return modeServer;
	}
	
	public synchronized void add(PicData data){
		buffert.add(data);
	//	System.out.println("add");
		notifyAll();
	}
	
	public synchronized int getCamNbr(int portNbr) {
		for(int i = 0; i < port.length; ++i) {
			if(portNbr == port[i]) {
				return i;
			}
		}
		//Ska ej komma hit...
		return 10;
	}
	
}
