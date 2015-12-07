package demo;
import client.Client;
import server.Server;

public class Demo {

	public static void main(String[] args) {
		Server1 s1 = new Server1();
		s1.start();
		Server2 s2 = new Server2();
		s2.start();
		try {
			Thread.currentThread().sleep(500);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		Client1 c = new Client1();
		c.start();
	}
	
	private static class Server1 extends Thread {
		public void run() {
			Server.main(new String[] {"6077", "8081"});
		}
	}
	
	private static class Server2 extends Thread {
		public void run() {
			Server.main(new String[] {"6078", "8082"});
		}
	}
	
	private static class Client1 extends Thread {
		public void run() {
			Client.main(new String[] {"localhost","localhost" ,"6077", "6078"});
	//		Client.main(new String[] {"argus-4.student.lth.se","argus-6.student.lth.se" ,"55502", "55501"});
		}
	}
	
	//HTTP create

}
/*

client

byte[] tb = new byte[8];
is.read(tb, 0, 8);
byte mode = (byte) is.read();
byte hi = (byte) is.read();
byte lo = (byte) is.read();
put.time = timeMillisFromArray(tb);

int bytesLeft = 0;
int bytesRead = 0;
int status = 0;
int size = (hi & 0xFF) * 255 + (lo & 0xFF);
bytesLeft = size;

do {
	status = is.read(put.jpeg, bytesRead, bytesLeft);
	if (status > 0) {
		bytesRead += status;
		bytesLeft -= status;
	}
} while (status >= 0 && bytesLeft > 0);


server

int len = cam.getJPEG(jpeg, 0);
					cam.getTime(time, 0);
					byte hi = (byte) (len / 255);
					byte lo = (byte) (len % 255);
					os.write(time, 0, time.length);
					os.write(Server.mode);
					os.write(hi);
					os.write(lo);
					os.write(jpeg, 0, len);
*/