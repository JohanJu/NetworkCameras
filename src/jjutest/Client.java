package jjutest;


import java.io.*;
import java.net.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Client {

	public static void main(String[] args) {
		if (args.length!=2) {
			System.out.println("Run Demo");
			System.exit(1);
		}
		new GUI(args[0],Integer.parseInt(args[1]));
	}

}


class ButtonHandler implements ActionListener {

	GUI gui;

	public ButtonHandler(GUI gui) {
		this.gui = gui;
	}

	public void actionPerformed(ActionEvent evt) {
		gui.refreshImage();
	}
}

@SuppressWarnings("serial")
class GUI extends JFrame {

	JButton button;
	JTextField jt;
	boolean firstCall = true;
	String serverAddr;
	int port;

	public GUI(String serverAddr,int port) {
		super();
		this.serverAddr = serverAddr;
		this.port = port;
		button = new JButton("Send");
		button.addActionListener(new ButtonHandler(this));
		jt = new JTextField("Message");
		this.getContentPane().setLayout(new BorderLayout());
		this.getContentPane().add(button, BorderLayout.SOUTH);
		this.getContentPane().add(jt, BorderLayout.NORTH);
		this.setLocationRelativeTo(null);
		this.pack();
		this.setVisible(true);
	}

	public void refreshImage() {
		try {
			// Open a socket to the server, get the input/output streams
			Socket sock = new Socket(serverAddr, port);
			InputStream is = sock.getInputStream();
			OutputStream os = sock.getOutputStream();

			// Send a simple request, always for "/image.jpg"
			putLine(os, jt.getText());

			// Read the first line of the response (status line)
			String responseLine;
			responseLine = getLine(is);
			System.out.println("HTTP server says '" + responseLine + "'.");
			sock.close();
			if(responseLine.equals("term")){
				System.exit(0);
			}

		}
		catch (IOException e) {
			System.out.println("Error when receiving image.");
			return;
		}

	}
	// -------------------------------------------------------- PRIVATE METHODS

	private static final byte[] CRLF      = { 13, 10 };

	/**
	 * Read a line from InputStream 's', terminated by CRLF. The CRLF is
	 * not included in the returned string.
	 */
	private static String getLine(InputStream s) throws IOException {
		boolean done = false;
		String result = "";

		while(!done) {
			int ch = s.read();        // Read
			if (ch <= 0 || ch == 10) {
				// Something < 0 means end of data (closed socket)
				// ASCII 10 (line feed) means end of line
				done = true;
			}
			else if (ch >= ' ') {
				result += (char)ch;
			}
		}
		return result;
	}

	/**
	 * Send a line on OutputStream 's', terminated by CRLF. The CRLF should not
	 * be included in the string str.
	 */
	private static void putLine(OutputStream s, String str) throws IOException {
		s.write(str.getBytes());
		s.write(CRLF);
	}

}
