package client;
import java.io.*;
import java.net.*;

import se.lth.cs.eda040.proxycamera.AxisM3006V;

public class FromServer_t extends Thread {
	
	String server;
	int port;
	InputStream is;
	Socket socket;
	
	byte hi;
	byte low;
	byte mode;
	
	int id;
	
	Monitor monitor;
	
	public FromServer_t(String server, int port, Monitor monitor, int id) throws UnknownHostException, IOException{
		this.server = server;
		this.port = port;
		
		this.id = id;
		
		is = monitor.sockets[id].getInputStream();
		
		this.monitor = monitor;
	}

	public void run(){
	while(true){
			byte[] headerTime = new byte[8];
			try {
				is.read(headerTime,0,8);
				mode = (byte) is.read();
				hi = (byte) is.read();
				low = (byte) is.read();
			} catch (IOException e) {
				e.printStackTrace();
			}
			PicData data = new PicData();
			data.timeStamp = timeMillisFromArray(headerTime);
			data.delay = System.currentTimeMillis() - data.timeStamp;
			data.camNbr = monitor.getCamNbr(port);
			data.mode = mode;
			
			int status = 0;
			int size = (hi & 0xFF) * 255 + (low & 0xFF);
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
