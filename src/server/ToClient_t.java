package server;

import java.io.IOException;
import java.io.OutputStream;

public class ToClient_t extends Thread {
	Monitor mon;
	OutputStream os;

	public ToClient_t(Monitor mon, OutputStream os) {
		this.mon = mon;
		this.os = os;
	}

	public void run() {
		try {
			while (!isInterrupted()) {
				os.write(mon.getJpeg());
			}
		} catch (IOException e) {
		}
	}
}
