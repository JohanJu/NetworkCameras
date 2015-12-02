package server;
import se.lth.cs.eda040.fakecamera.*;
public class Monitor {
	public static final byte AUTO  = 0;
	public static final byte MOVIE   = 1;
	public static final byte IDLE = 2;
	private byte[] jpeg = new byte[AxisM3006V.IMAGE_BUFFER_SIZE+7];
	private byte mode;
	
	synchronized byte[] getJpeg(){
		byte[] re = new byte[jpeg.length];
		System.arraycopy(jpeg, 0, re, 0, jpeg.length ); 
		return re;
	}
	synchronized void setJpeg(byte[] newJpeg){
		jpeg = newJpeg;
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

}