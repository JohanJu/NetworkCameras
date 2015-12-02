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
	
	public ClientStream_T(String server, int port) throws UnknownHostException, IOException{
		this.server = server;
		this.port = port;
		
		socket = new Socket(server, port);
		is = socket.getInputStream();
		os = socket.getOutputStream();
		
		
	}

	public void run(){
		
		// Header
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
		
		
	}
	
	//Helping Methods
	private long timeMillisFromArray(byte[] array) {
	    long time = 0;
	    for (int i=0; i<AxisM3006V.TIME_ARRAY_SIZE; i++)
	      time = (time << 8) | (array[i] & 0xFF);
	    return time;
	  }
}
