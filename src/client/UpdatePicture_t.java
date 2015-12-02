package client;

public class UpdatePicture_t extends Thread {
	Monitor monitor;
	GUI gui;
	
	public static final byte AUTO  = 0;
	public static final byte MOVIE   = 1;
	public static final byte IDLE = 2;
	public static final byte ASYNC = 3;
	public static final byte SYNC = 4;
	
	boolean isSync;
	
	public UpdatePicture_t(Monitor monitor, GUI gui) {
		this.monitor = monitor;
		this.gui = gui;
	}
	
	public void run() {
		while(true) {
			PicData pic1 = monitor.getPicture(0);
			PicData pic2 = monitor.getPicture(1);
			advancedModeAlgorithm(pic1, pic2);
			gui.updateIcon(picture, monitor.getCamNbr(picture.port));		//PORT??? ELLER CAM (SKA SKICKA 0/1)
		}
	}
	
	private void advancedModeAlgorithm(PicData pic1,PicData pic2) {
		long time1 = pic1.timeStamp;
		long time2 = pic2.timeStamp;
		
		if( Math.abs(time1 - time2) > 0.2 && isSync){
			monitor.updateMode(ASYNC);
			isSync = false;
		} else if ( !isSync && Math.abs(time1 - time2) < 0.2 ){
			
			
		}
		
	}
	
}
