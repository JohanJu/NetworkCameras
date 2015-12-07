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
//			use for fake/proxy canmera
			Client.main(new String[] {"localhost","localhost" ,"6077", "6078"});
//			use for real camera
//			Client.main(new String[] {"argus-4.student.lth.se","argus-6.student.lth.se" ,"55502", "55501"}); 
		}
	}
	

}