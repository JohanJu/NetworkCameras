import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class FromClient_t extends Thread {
	Monitor mon;
	int port;

	public FromClient_t(Monitor mon, int port) {
		this.mon = mon;
		this.port = port;
	}

	public void run() {
		
		ServerSocket serverSocket;
		try {
			serverSocket = new ServerSocket(port);
			while (!isInterrupted()) {
				Socket clientSocket = serverSocket.accept();
				InputStream is = clientSocket.getInputStream();
				OutputStream os = clientSocket.getOutputStream();
				Thread toClient = new ToClient_t(mon, os);
				toClient.start();
				while (!isInterrupted()) {
					try {
						byte i = (byte) is.read(); 
						System.out.println("Recieved from client: " + i);
						mon.setMode(i);
					} catch (IOException e) {
						break;
					}
				}
			}
		} catch (IOException e) {
		}
	}
}