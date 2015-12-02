package server;
import se.lth.cs.eda040.fakecamera.*;
public class Monitor {
	public static final byte AUTO  = 0;
	public static final byte MOVIE   = 1;
	public static final byte IDLE = 2;
	private byte[] jpeg = new byte[AxisM3006V.IMAGE_BUFFER_SIZE+11];
	private byte mode = 1;
	private long now = 0;
	
	synchronized byte[] getJpeg(long old) throws InterruptedException{
		while(old == now){
			wait();
		}
		byte[] re = new byte[jpeg.length];
		System.arraycopy(jpeg, 0, re, 0, jpeg.length ); 
		return re;
	}
	synchronized void setJpeg(byte[] newJpeg){
		jpeg = newJpeg;
		now = timeMillisFromArray(jpeg);
		notifyAll();
	}
	synchronized byte getMode(){
		return mode;
	}
	synchronized void setMode(byte newMode){
		mode = newMode;
	}
	synchronized void testSetMode(){
		if(mode == AUTO){
			mode = MOVIE;
		}
	}
	private static long timeMillisFromArray(byte[] array) {
		long time = 0;
		for (int i = 0; i < 8; i++)
			time = (time << 8) | (array[i] & 0xFF);
		return time;
	}

}