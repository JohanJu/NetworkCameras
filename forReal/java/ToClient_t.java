
import java.io.IOException;
import java.io.OutputStream;

import se.lth.cs.eda040.realcamera.AxisM3006V;

public class ToClient_t extends Thread {
	Monitor mon;
	OutputStream os;
	long old = 0;

	public ToClient_t(Monitor mon, OutputStream os) {
		this.mon = mon;
		this.os = os;
	}

	public void run() {
		byte[] jpeg = new byte[AxisM3006V.IMAGE_BUFFER_SIZE + 11];
		try {
//			for(int i = 0;i < 3; ++i) {
			while (!isInterrupted()) {
				try {
					
					jpeg = mon.getJpeg(old);
					int size = ((jpeg[9] & 0xFF) * 255 + (jpeg[10] & 0xFF));
//					System.out.println("ser leng "+ size);
//					System.out.println("hi = " + jpeg[9]);
//					System.out.println("Low = " + jpeg[10]);
					old = timeMillisFromArray(jpeg);
					os.write(jpeg,0,size+11);
				} catch (InterruptedException e1) {
				}
//				try {
//					Thread.sleep(1000);
//				} catch (InterruptedException e) {
//				}

			}
		} catch (IOException e) {
		}
	}

	private static long timeMillisFromArray(byte[] array) {
		long time = 0;
		for (int i = 0; i < 8; i++)
			time = (time << 8) | (array[i] & 0xFF);
		return time;
	}
}
