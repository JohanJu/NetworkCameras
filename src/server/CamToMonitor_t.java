package server;
import se.lth.cs.eda040.fakecamera.*;
public class CamToMonitor_t extends Thread{
	Monitor mon;
	public CamToMonitor_t(Monitor mon){
		this.mon=mon;
	}
	public void run(){
		AxisM3006V cam; 
		cam = new AxisM3006V();
		cam.init();
		cam.setProxy("argus-1.student.lth.se", 55501);
		cam.connect();
		byte[] jpeg = new byte[AxisM3006V.IMAGE_BUFFER_SIZE+7];
		int len;
		byte mode = 0;
		while(!isInterrupted()){
			mode = mon.getMode();
			len = cam.getJPEG(jpeg, 7);
			cam.getTime(jpeg, 0);
			byte hi = (byte) (len / 255);
			byte lo = (byte) (len % 255);
			jpeg[4]=mode;
			jpeg[5]=hi;
			jpeg[6]=lo;
			mon.setJpeg(jpeg);
			if(mode == Monitor.AUTO || mode == Monitor.IDLE)
				for (int i = 0; i < 24; i++) {
					len = cam.getJPEG(jpeg, 7);
					if (cam.motionDetected()) {
						mon.testSetMode();
						break;
					}
			}
		}
	}

}
