import se.lth.cs.eda040.realcamera.*;

public class CamToMonitor_t extends Thread {
	Monitor mon;

	public CamToMonitor_t(Monitor mon) {
		this.mon = mon;
	}

	public void run() {
		AxisM3006V cam;
		cam = new AxisM3006V();
		cam.init();
		cam.connect();
		byte[] jpeg = new byte[AxisM3006V.IMAGE_BUFFER_SIZE + 11];
		int len;
		byte mode = 0;
		while (!isInterrupted()) {
			mode = mon.getMode();
			len = cam.getJPEG(jpeg, 11);
			cam.getTime(jpeg, 0);
			byte hi = (byte) (len / 255);
			byte lo = (byte) (len % 255);
			jpeg[8] = mode;
			jpeg[9] = hi;
			jpeg[10] = lo;
			mon.setJpeg(jpeg);
			if (mode == Monitor.AUTO || mode == Monitor.IDLE)
				for (int i = 0; i < 24; i++) {
					len = cam.getJPEG(jpeg, 11);
					// använd myNb för att testa att movie sprids
					if (cam.motionDetected() && mode == Monitor.AUTO) {
						mon.testSetMode();
						break;
					}
				}
		}
	}

}
