package client;

import java.util.LinkedList;

public class Monitor {
	public static final byte AUTO  = 0;
	public static final byte MOVIE   = 1;
	public static final byte IDLE = 2;
	
	LinkedList<PicData> buffert = new LinkedList<PicData>();
	
	private boolean userChangedMode = false;
	private byte mode = AUTO;
	
	private int[] port;
	
	public Monitor(int[] port) {
		this.port = port;
	}
	
	public synchronized PicData getPicture() {
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
	
	/*
	 * User changed mode via button in GUI
	 * */
	public synchronized void updateMode(byte mode) {
		this.mode = mode;
		userChangedMode = true;
		notifyAll();
	}
	
	public synchronized byte getMode() throws InterruptedException{
		while(!userChangedMode){
			wait();
		}
		userChangedMode = false;
		return mode;
	}
	
	public synchronized void add(PicData data){
		buffert.add(data);
		notifyAll();
	}
	
	public synchronized int getCamNbr(int portNbr) {
		for(int i = 0; i < port.length; ++i) {
			if(portNbr == port[i]) {
				return i;
			}
		}
		//Ska ej komma hit...
		return 10;
	}
	
}
