package client;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.net.UnknownHostException;

public class ToServer_T extends Thread{
	
	String server;
	int port;
	OutputStream os;
	Socket socket;
	
	byte hi;
	byte low;
	
	Monitor monitor;
	
	public ToServer_T(String server, int port, Monitor monitor) throws UnknownHostException, IOException{
		this.server = server;
		this.port = port;
		
		socket = new Socket(server, port);
		os = socket.getOutputStream();
		
		this.monitor = monitor;
	}

	public void run(){
		while(true){
			byte mode = monitor.getMode()
			
		}
	}
	
	
}