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
			int cam = monitor.getCamNbr(picture.port);
			gui.updateIcon(picture.picture, cam);		//PORT??? ELLER CAM (SKA SKICKA 0/1)
			switch(picture.mode) {
			case Monitor.AUTO:
				if(cam == 0) {
					gui.updateTextOnTextField(gui.MODE_CAM1, "auto");
				} else {
					gui.updateTextOnTextField(gui.MODE_CAM2, "auto");
				}
				break;
			case Monitor.IDLE:
				if(cam == 0) {
					gui.updateTextOnTextField(gui.MODE_CAM1, "idle");
				} else {
					gui.updateTextOnTextField(gui.MODE_CAM2, "idle");
				}
				break;
			case Monitor.MOVIE:
				if(cam == 0) {
					gui.updateTextOnTextField(gui.MODE_CAM1, "movie");
				} else {
					gui.updateTextOnTextField(gui.MODE_CAM2, "movie");
				}
				break;
			}
		}
	}
}
