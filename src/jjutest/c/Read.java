package jjutest.c;

import java.io.InputStream;
import java.net.Socket;
import se.lth.cs.eda040.proxycamera.AxisM3006V;

public class Read implements Runnable {
	private Socket sock;
	Buffert buff;
	boolean b = true;

	public Read(Socket sock, Buffert buff) {
		this.sock = sock;
		this.buff = buff;
	}

	public void run() {
		try {
			while (b) {
				InputStream is = sock.getInputStream();
				TJ put = new TJ();
				byte[] tb = new byte[8];
				int bytesLeft = 0;
				int bytesRead = 0;
				int status = 0;
				is.read(tb, 0, 8);
				put.time = timeMillisFromArray(tb);
				byte mode = (byte) is.read();
				if (mode == 0 && 1 == (byte) is.read()) {
					Buffert.cM();
					mode = 1;
				}
				byte hi = (byte) is.read();
				byte lo = (byte) is.read();
				int size = (hi & 0xFF) * 255 + (lo & 0xFF);
				bytesLeft = size;
				do {
					status = is.read(put.jpeg, bytesRead, bytesLeft);
					if (status > 0) {
						bytesRead += status;
						bytesLeft -= status;
					}
				} while (status >= 0 && bytesLeft > 0);
				// System.out.println("ctime "+put.time);
				// System.out.println("ltime "+System.currentTimeMillis());
				buff.put(put);
				Thread.sleep(40);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

	private static long timeMillisFromArray(byte[] array) {
		long time = 0;
		for (int i = 0; i < AxisM3006V.TIME_ARRAY_SIZE; i++) {
			time = (time << 8) | (array[i] & 0xFF);
		}
		return time;
	}
}
