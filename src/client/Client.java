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
			FromServer_T read1 = new FromServer_T(address[0], port[0], monitor, 0);
			FromServer_T read2 = new FromServer_T(address[1], port[1], monitor, 1);
		
			read1.start();
			read2.start();
			updateGUI.start();
		
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		

	}

}
