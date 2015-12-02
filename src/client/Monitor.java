package client;

import java.util.LinkedList;

public class Monitor {
	public static final int AUTO  = 0;
	public static final int MOVIE   = 1;
	public static final int IDLE = 2;
	
	LinkedList<PicData> buffert = new LinkedList<PicData>();
	
	public PicData getPicture() {
		while(buffert.isEmpty()) {
			try {
				wait();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		return buffert.getLast();
	}
}
