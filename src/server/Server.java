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
		JHServer jhserver = new JHServer(mon, args[1]);
		jhserver.start();
	}
	
	private static class JHServer extends Thread {
		
		Monitor mon;
		String port;
		
		public JHServer (Monitor mon, String port) {
			this.mon = mon;
			this.port = port;
		}
		
		public void run() {
			JPEGHTTPServer.main(new String[] {port}, mon);
		}
	}
}
