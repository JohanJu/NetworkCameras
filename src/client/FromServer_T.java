package client;
import java.io.*;
import java.net.*;

import se.lth.cs.eda040.proxycamera.AxisM3006V;

public class FromServer_T extends Thread {
	
	String server;
	int port;
	InputStream is;
	Socket socket;
	
	byte hi;
	byte low;
	byte mode;
	
	Monitor monitor;
	
	public FromServer_T(String server, int port, Monitor monitor) throws UnknownHostException, IOException{
		this.server = server;
		this.port = port;
		
		socket = new Socket(server, port);
		is = socket.getInputStream();
		
		this.monitor = monitor;
	}

	public void run(){
	//while(true){
	for(int i = 0; i < 3; ++i) {
		//Fetching Header
			byte[] headerTime = new byte[8];
			try {
				is.read(headerTime,0,8);
				mode = (byte) is.read();
				hi = (byte) is.read();
				low = (byte) is.read();
				System.out.println("hi = " + hi);
				System.out.println("Low = " + low);
			} catch (IOException e) {
				e.printStackTrace();
			}
			PicData data = new PicData();
			data.timeStamp = timeMillisFromArray(headerTime);
			data.port = port;
			
			//Fetching picture
			int status = 0;
			int size = (hi & 0xFF) * 255 + (low & 0xFF);
			System.out.println("size recieved: " + size);
			int bytesLeft = size;
			int bytesRead = 0;	
			byte[] tempPicture = new byte[size+5];
			
			do {
				try {
					status = is.read(tempPicture, bytesRead, bytesLeft);
				} catch (IOException e) {
					e.printStackTrace();
				}
				if (status > 0) {
					bytesRead += status;
					bytesLeft -= status;
				}
			} while (status >= 0 && bytesLeft > 0);
			
			data.picture = tempPicture;
			monitor.add(data);
		}
	}
		
	
	
	
	
	
	//Helping Methods
	private long timeMillisFromArray(byte[] array) {
	    long time = 0;
	    for (int i=0; i<AxisM3006V.TIME_ARRAY_SIZE; i++)
	      time = (time << 8) | (array[i] & 0xFF);
	    return time;
	  }
}
