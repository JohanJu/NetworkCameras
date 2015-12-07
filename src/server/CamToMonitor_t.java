package server;
import se.lth.cs.eda040.fakecamera.AxisM3006V;
//import se.lth.cs.eda040.proxycamera.AxisM3006V;

public class CamToMonitor_t extends Thread {
	static volatile int nbr = 0;
	int myNb;
	Monitor mon;

	public CamToMonitor_t(Monitor mon) {
		this.mon = mon;
		myNb = nbr++;
	}

	public void run() {
		System.out.println("nbr "+myNb);
		AxisM3006V cam;
		cam = new AxisM3006V();
		cam.init();
		if (myNb == 0) {
			cam.setProxy("argus-4.student.lth.se", 55501);
		} else {
			cam.setProxy("argus-6.student.lth.se", 55502);
		}
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
					if (cam.motionDetected() && mode == Monitor.AUTO) {
						mon.testSetMode();
						break;
					}
				}
		}
	}

}
