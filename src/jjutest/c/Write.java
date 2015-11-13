package jjutest.c;

import java.io.*;
import java.net.Socket;
import se.lth.cs.eda040.proxycamera.AxisM3006V;

public class Write implements Runnable {
	private int port = 55555;
	private Socket sock;
	private AxisM3006V myCamera;
	
	public Write(Socket sock) {
		this.sock = sock;
	}
    public void run() {
    	try {
			OutputStream os = sock.getOutputStream();
			System.out.println("12");
			while(true){
				 try {
						Thread.sleep(1000);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
			}
			
		} catch (IOException e) {
			e.printStackTrace();
		}
    }
}
