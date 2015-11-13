package jjutest;

import jjutest.c.CMain;
import jjutest.s.SMain;

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
		Client c = new Client();
		c.start();
	}

	private static class Server1 extends Thread {
		public void run() {
			new SMain(55501, "argus-4.student.lth.se");
		}
	}

	private static class Server2 extends Thread {
		public void run() {
			new SMain(55502, "argus-6.student.lth.se");
		}
	}

	private static class Client extends Thread {
		public void run() {
			new CMain(new int[]{55501,55502}, new String[] {"localhost","localhost"});
		}
	}

}
