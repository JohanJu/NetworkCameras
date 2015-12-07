package server;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

import se.lth.cs.eda040.fakecamera.AxisM3006V;

public class HTTP_t extends Thread {
	Monitor mon;
	int port;

	public HTTP_t(Monitor mon, int port) {
		this.mon = mon;
		this.port = port;
	}

	public void run() {
		byte[] jpeg = new byte[AxisM3006V.IMAGE_BUFFER_SIZE + 11];
		try {
			ServerSocket serverSocket = new ServerSocket(port);
			System.out.println("HTTP server operating at port " + port + ".");
			while(!isInterrupted()){
				Socket clientSocket = serverSocket.accept();

				InputStream  is = clientSocket.getInputStream();
				OutputStream os = clientSocket.getOutputStream();

				String request = getLine(is);

				String header;
				boolean cont; 
				do {
					header = getLine(is);
					cont = !(header.equals(""));
				} while (cont);

				System.out.println("HTTP request '" + request
						+ "' received.");

				if (request.substring(0,4).equals("GET ")) {

					putLine(os, "HTTP/1.0 200 OK");
					putLine(os, "Content-Type: image/jpeg");
					putLine(os, "Pragma: no-cache");
					putLine(os, "Cache-Control: no-cache");
					putLine(os, "");                   

					try {
						jpeg = mon.getJpeg(-1);
					} catch (Exception e) {
						// Nope
					}
					
					int len = ((jpeg[9] & 0xFF) * 255 + (jpeg[10] & 0xFF));
					
					os.write(jpeg, 11, len);
				}
				else {
					putLine(os, "HTTP/1.0 501 Method not implemented");
					putLine(os, "Content-Type: text/plain");
					putLine(os, "");
					putLine(os, "No can do. Request '" + request
							+ "' not understood.");

					System.out.println("Unsupported HTTP request!");
				}

				os.flush();                     
				clientSocket.close();	         
			}
		} catch (IOException e) {
		}
	}
	private static String getLine(InputStream s)
			throws IOException {
		boolean done = false;
		String result = "";

		while(!done) {
			int ch = s.read();        // Read
			if (ch <= 0 || ch == 10) {
				done = true;
			}
			else if (ch >= ' ') {
				result += (char)ch;
			}
		}

		return result;
	}
	private static final byte[] CRLF      = { 13, 10 };
	private static void putLine(OutputStream s, String str)
			throws IOException {
		s.write(str.getBytes());
		s.write(CRLF);
	}

}
