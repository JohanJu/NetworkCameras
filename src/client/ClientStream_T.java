package client;
import java.io.*;
import java.net.*;

import se.lth.cs.eda040.proxycamera.AxisM3006V;

public class ClientStream_T extends Thread {
	
	String server;
	int port;
	InputStream is;
	OutputStream os;
	Socket socket;
	
	byte hi;
	byte low;
	
	public ClientStream_T(String server, int port) throws UnknownHostException, IOException{
		this.server = server;
		this.port = port;
		
		socket = new Socket(server, port);
		is = socket.getInputStream();
		os = socket.getOutputStream();
		
		
	}

	public void run(){
		
		//Fetching Header
		byte[] headerTime = new byte[8];
		try {
			is.read(headerTime,0,8);
			byte mode = (byte) is.read();
			byte hi = (byte) is.read();
			byte low = (byte) is.read();
		} catch (IOException e) {
			e.printStackTrace();
		}
		PicData data = new PicData();
		data.timeStamp = timeMillisFromArray(headerTime);
		
		//Fetching picture
		int status = 0;
		int size = (hi & 0xFF) * 255 + (low & 0xFF);
		int bytesLeft = size;
		int bytesRead = 0;
		
		do {
			status = is.read(put.jpeg, bytesRead, bytesLeft);
			if (status > 0) {
				bytesRead += status;
				bytesLeft -= status;
			}
		} while (status >= 0 && bytesLeft > 0);
		
		
		
		
	}
	
	//Helping Methods
	private long timeMillisFromArray(byte[] array) {
	    long time = 0;
	    for (int i=0; i<AxisM3006V.TIME_ARRAY_SIZE; i++)
	      time = (time << 8) | (array[i] & 0xFF);
	    return time;
	  }
}
