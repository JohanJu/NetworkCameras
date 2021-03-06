package client;

import java.io.IOException;

public class Client {

	public static void main(String[] args) {
		if (args.length!=4) {
			System.out.println("Syntax: JPEGHTTPClient <address> <address> <port> <port>");
			System.exit(1);
		}
		String[] address = {args[0], args[1]};
		int[] port = {Integer.parseInt(args[2]), Integer.parseInt(args[3])};
		Monitor monitor = new Monitor(port, address);
		GUI gui = new GUI(monitor);
		UpdatePicture_t updateGUI = new UpdatePicture_t(monitor, gui);

		try {
			FromServer_t read1 = new FromServer_t(address[0], port[0], monitor, 0);
			FromServer_t read2 = new FromServer_t(address[1], port[1], monitor, 1);
		
			ToServer_t write = new ToServer_t(monitor);
			read1.start();
			read2.start();
			write.start();
			updateGUI.start();
			
		
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}