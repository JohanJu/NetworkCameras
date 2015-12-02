package server;

import server.JPEGHTTPServer;

public class Server {
	public static void main(String[] args) {
		System.out.println("main "+Integer.parseInt(args[0]));
		Monitor mon = new Monitor();
		Thread camToMonitor = new CamToMonitor_t(mon);
		Thread fromClient = new FromClient_t(mon, Integer.parseInt(args[0]));
		camToMonitor.start();
		fromClient.start();
//		JHServer jhserver = new JHServer(mon);
//		jhserver.start();
	}
	
	private static class JHServer extends Thread {
		
		Monitor mon;
		
		JHServer (Monitor mon) {
			this.mon = mon;
		}
		
		public void run() {
			JPEGHTTPServer.main(new String[] {"6077"}, mon);
		}
	}
}
