package jjutest.s;

import java.net.ServerSocket;
import java.net.Socket;

public class SMain {

	public SMain(int port, String addr) {
		try {
			ServerSocket serverSocket = new ServerSocket(port);
			System.out.println("HTTP server operating at port " + port + ".");
			while (port != 0) {
				Socket clientSocket = serverSocket.accept();
				Thread t = new Thread(new Write(clientSocket, addr, port));
				t.start();
				t.join();
			}
			serverSocket.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}