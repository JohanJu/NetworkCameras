package client;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.net.UnknownHostException;

public class ToServer_t extends Thread{
	
	OutputStream[] os = new OutputStream[2];
	Socket socket;
	byte mode;
	Monitor monitor;
	
	public ToServer_t(Monitor monitor) throws UnknownHostException, IOException{
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
				System.out.println("send mode to server: " + mode);
			} catch (InterruptedException | IOException e) {
				e.printStackTrace();
			}
		}
	}
	
	
}