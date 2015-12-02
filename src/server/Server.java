package server;

public class Server {
	static int port;
	public static void main(String[] args) {
		if(args.length==0){
			port = 55501;
		}else{
			port = Integer.parseInt(args[0]);
		}
		Monitor mon = new Monitor();
		Thread camToMonitor = new CamToMonitor_t(mon);
		Thread fromClient = new FromClient_t(mon, port);
		fromClient.start();
		
	}
}
