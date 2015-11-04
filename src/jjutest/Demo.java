package jjutest;


public class Demo {

	public static void main(String[] args) {
		Ser s = new Ser();
		s.start();
		Cli c = new Cli();
		c.start();
	}
	
	private static class Ser extends Thread {
		public void run() {
			Server.main(new String[] {"55551"});
		}
	}
	
	private static class Cli extends Thread {
		public void run() {
			Client.main(new String[] {"localhost", "55551"});
		}
	}
}
