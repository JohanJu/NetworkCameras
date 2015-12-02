package server;
import se.lth.cs.eda040.fakecamera.*;
public class Monitor {
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

}