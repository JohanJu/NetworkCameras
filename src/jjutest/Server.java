package jjutest;
import java.net.*;                  // Provides ServerSocket, Socket
import java.io.*;                   // Provides InputStream, OutputStream

public class Server {
	private int myPort;    
	private final byte[] CRLF      = { 13, 10 };
	public static void main(String[]args) {
		if (args.length!=1) {
			System.out.println("Run Demo");
			System.exit(1);
		}
		Server theServer = new Server(Integer.parseInt(args[0]));
		try {
			theServer.handleRequests();
		} catch(IOException e) {
			System.out.println("Server Error!");
			System.exit(1);
		}
	}

	public Server(int port) {
		myPort   = port;
	}

	public void handleRequests() throws IOException {
		ServerSocket serverSocket = new ServerSocket(myPort);
		System.out.println("HTTP server operating at port " + myPort + ".");
		System.out.println("Terminate server with 'br'");
		while (true) {
			try {
				Socket clientSocket = serverSocket.accept();
				InputStream  is = clientSocket.getInputStream();
				OutputStream os = clientSocket.getOutputStream();
				String in = "";
				boolean done = false;
				while(!done) {
					int ch = is.read();        
					if (ch <= 0 || ch == 10) {
						done = true;
					}
					else if (ch >= ' ') {
						in += (char)ch;
					}
				}
				System.out.println("Server recive '"+in+ "'.");
				if(in.equals("br")){
					os.write("term".getBytes());
					os.write(CRLF);
					os.flush();                      
					clientSocket.close();
					break;
				}
				os.write(in.toUpperCase().getBytes());
				os.write(CRLF);
				os.flush();                      
				clientSocket.close();	         
			}
			catch (IOException e) {
				System.out.println("Caught exception " + e);
			}
		}
		serverSocket.close();
		System.exit(0);
	}

}