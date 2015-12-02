package client;

public class UpdatePicture_t extends Thread {
	Monitor monitor;
	GUI gui;
	public UpdatePicture_t(Monitor monitor, GUI gui) {
		this.monitor = monitor;
		this.gui = gui;
	}
	
	public void run() {
		while(true) {
			PicData picture = monitor.getPicture();
			gui.updateIcon(picture.picture, monitor.getCamNbr(picture.port));		//PORT??? ELLER CAM (SKA SKICKA 0/1)
		}
	}
}
