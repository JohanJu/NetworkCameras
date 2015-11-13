package jjutest.s;

import java.io.*;
import java.net.Socket;
import se.lth.cs.eda040.proxycamera.AxisM3006V;
//import se.lth.cs.eda040.fakecamera.*;

public class Write implements Runnable {
	private int port;
	private String addr;
	private Socket sock;
	private AxisM3006V cam;
	private byte mode = 1; // 1=movie,0=idle
	private final byte[] jpeg = new byte[AxisM3006V.IMAGE_BUFFER_SIZE];
	private final byte[] time = new byte[AxisM3006V.TIME_ARRAY_SIZE];

	public Write(Socket sock, String addr, int port) {
		this.sock = sock;
		this.addr = addr;
		// this.port = port;
		this.port = 52345;
	}

	public void run() {
		try {

			OutputStream os = sock.getOutputStream();
			cam = new AxisM3006V();
			cam.init();
			cam.setProxy(addr, port);
			cam.connect();
			int count = 0;
			while (!Thread.interrupted()) {
				if (mode == 1 || count == 25) {
					count = 0;
					int len = cam.getJPEG(jpeg, 0);
					cam.getTime(time, 0);
					// System.out.println(len);
					byte hi = (byte) (len / 255);
					byte lo = (byte) (len % 255);
					os.write(time, 0, time.length);
					os.write(mode);
					os.write(hi);
					os.write(lo);
					os.write(jpeg, 0, len);
				} else {
					count++;
					System.out.println("idle");
					if (cam.motionDetected())
						mode = 1;
				}
				Thread.sleep(40);
			}

		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
