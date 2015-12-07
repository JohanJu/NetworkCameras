package server;

public class Server {
	public static void main(String[] args) {
		System.out.println("main "+Integer.parseInt(args[0]));
		Monitor mon = new Monitor();
		Thread camToMonitor = new CamToMonitor_t(mon);
		Thread fromClient = new FromClient_t(mon, Integer.parseInt(args[0]));
		camToMonitor.start();
		fromClient.start();
		HTTP_t http = new HTTP_t(mon, Integer.parseInt(args[1]));
		http.start();
	}
}
