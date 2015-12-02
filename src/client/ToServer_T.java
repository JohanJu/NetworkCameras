package client;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.net.UnknownHostException;

public class ToServer_T extends Thread{
	
	String server;
	int port;
	OutputStream[] os;
	Socket socket;
	
	byte mode;
	
	
	Monitor monitor;
	
	public ToServer_T(String server, int port, Monitor monitor) throws UnknownHostException, IOException{
		this.server = server;
		this.port = port;
		
		this.monitor = monitor;
	

		os[0] = monitor.sockets[0].getOutputStream();
		os[1] = monitor.sockets[1].getOutputStream();

		
		
		
	}

	public void run(){
		while(true){
			try {
				mode = monitor.getMode();
				os[0].write(mode);
				os[1].write(mode);
			} catch (InterruptedException | IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
			
			
		}
	}
	
	
}