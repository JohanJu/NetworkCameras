package client;

import java.io.IOException;

public class Client {

	public static void main(String[] args) {
		if (args.length!=3) {
			System.out.println("Syntax: JPEGHTTPClient <address> <port> <port>");
			System.exit(1);
		}
		
		Monitor monitor = new Monitor();
		GUI gui = new GUI(monitor);

		try {
			FromServer_T read1 = new FromServer_T(args[0], Integer.parseInt(args[1]), monitor);
			FromServer_T read2 = new FromServer_T(args[0], Integer.parseInt(args[2]), monitor);
		
		
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

}
