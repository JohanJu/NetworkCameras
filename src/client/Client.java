package client;

import java.io.IOException;

public class Client {

	public static void main(String[] args) {
		if (args.length!=3) {
			System.out.println("Syntax: JPEGHTTPClient <address> <port> <port>");
			System.exit(1);
		}
		
		int[] port = {Integer.parseInt(args[1]), Integer.parseInt(args[2])};
		Monitor monitor = new Monitor(port);
		GUI gui = new GUI(monitor);
		UpdatePicture_t updateGUI = new UpdatePicture_t(monitor, gui);

		try {
			FromServer_T read1 = new FromServer_T(args[0], Integer.parseInt(args[1]), monitor);
		//	FromServer_T read2 = new FromServer_T(args[0], Integer.parseInt(args[2]), monitor);
		
			read1.start();
		//	read2.start();
			updateGUI.start();
		
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		

	}

}
