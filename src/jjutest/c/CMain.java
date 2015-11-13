package jjutest.c;

import java.net.Socket;


public class CMain {
	Buffert[] buff = new Buffert[2];

	public CMain(int[] port, String[] addr) {
		for (int i = 0; i < buff.length; i++) {
			buff[i] = new Buffert();
		}
		try {
			for (int i = 0; i < addr.length; i++) {
				Socket sock;
				sock = new Socket(addr[i], port[i]);
				new Thread(new Read(sock, buff[i])).start();
			}
			Thread ug = new Thread(new UpdateGUI(buff));
			ug.start();

		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}