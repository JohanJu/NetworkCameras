package client;
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;
public class GUI extends JFrame implements ActionListener{

	/* used to get right JTextField */
	public static final int DELAY_CAMERA1  = 0;
	public static final int DELAY_CAMERA2   = 1;
	public static final int CAM_TRIGGERED_MOVIE = 2;
	public static final int MODE_CAM1 = 3;
	public static final int MODE_CAM2 = 4;
	
	Monitor monitor;
	ImageIcon icon1, icon2;
	JButton b1, b2, b3, b4, b5;
	JPanel panelSouth,panelNorth;
	JTextField t1, t2, t3, t4, t5; 
	
	public GUI(Monitor monitor) {
		this.monitor = monitor;
		
		icon1 = new ImageIcon();
		icon2 = new ImageIcon();
		
		//create buttons and place on JPanel-South
		panelSouth = new JPanel();
		add(panelSouth, BorderLayout.SOUTH);
		b1 = new JButton("Auto");
		b2 = new JButton("Movie");
		b3 = new JButton("Idle");
		b4 = new JButton("Asynchronous");
		b5 = new JButton("Synchronous");
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		b5.addActionListener(this);
		panelSouth.add(b1);
		panelSouth.add(b2);
		panelSouth.add(b3);
		panelSouth.add(b4);
		panelSouth.add(b5);
		
		//create textfields and place on JPanel-North
		panelNorth = new JPanel();
		add(panelNorth, BorderLayout.NORTH);
		t1 = new JTextField("Current delay on camera 1: xxx");
		t2 = new JTextField("Current delay on camera 2: xxx");
		t3 = new JTextField("Camera server latest triggered movie mode: x");
		t4 = new JTextField("Mode on camera 1: XXXXXXXXXXXXXXX");
		t5 = new JTextField("Mode on camera 2: XXXXXXXXXXXXXXX");
		t1.setEditable(false);
		t2.setEditable(false);
		t3.setEditable(false);
		t4.setEditable(false);
		t5.setEditable(false);
		t1.setBackground(new Color(0,0,0,0));
		t2.setBackground(new Color(0,0,0,0));
		t3.setBackground(new Color(0,0,0,0));
		t4.setBackground(new Color(0,0,0,0));
		t5.setBackground(new Color(0,0,0,0));		
		panelNorth.add(t1);
		panelNorth.add(t2);
		panelNorth.add(t3);
		panelNorth.add(t4);
		panelNorth.add(t5);
		
		setSize(1280, 520+60);
		setVisible(true);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	
	
	
	@Override
	public void actionPerformed(ActionEvent e) {
		//Send new mode to monitor
		if(e.getSource() == b1) {
			
		} else if (e.getSource() == b2) {
			
		} else if (e.getSource() == b3) {
			
		} else if (e.getSource() == b4) {
			
		} else if (e.getSource() == b5) {
			
		}		
	}
	
	public void updateIcon(byte[] jpeg, int cam) {
		Image image = getToolkit().createImage(jpeg);
		getToolkit().prepareImage(image, -1, -1, null);
		
		switch(cam) {
		case 0:
			icon1.setImage(image);
			icon1.paintIcon(this, this.getGraphics(), 0, 60);
			break;
		case 1:
			icon2.setImage(image);
			icon2.paintIcon(this, this.getGraphics(), 640, 60);
			break;
		}
	}
	
	/*
	 * update JTextField on GUI
	 * 
	 * @param   field   The JTextField that should be updated
	 * @text	text	The text to be updated with 
	 *  */
	public void updateTextOnTextField(int field, String text) {
		switch(field) {
		case DELAY_CAMERA1:
			t1.setText("Current delay on camera 1: " + text);
			break;
		case DELAY_CAMERA2:
			t2.setText("Current delay on camera 2: " + text);
			break;
		case CAM_TRIGGERED_MOVIE:
			t3.setText("Camera server latest triggered movie mode: " + text);
			break;
		case MODE_CAM1:
			t4.setText("Mode on camera 1: " + text);
			break;
		case MODE_CAM2:
			t5.setText("Mode on camera 2: " + text);
			break;
		}		
	}
	
	public void setSelected(int button) {
		switch(button) {
			case 1:
				b1.setSelected(true);
				b2.setSelected(false);
				b3.setSelected(false);
				b4.setSelected(false);
				b5.setSelected(false);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
				
		}
	}
}
