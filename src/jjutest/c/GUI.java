package jjutest.c;

import java.awt.BorderLayout;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

@SuppressWarnings("serial")
public class GUI extends JFrame implements ActionListener {
	ImageIcon icon1;
	ImageIcon icon2;
	JButton jb;

	public GUI() {
		getContentPane().setLayout(new BorderLayout());
		icon1 = new ImageIcon();
		icon2 = new ImageIcon();
		jb = new JButton("Next");
		jb.addActionListener(this);

		// add(jb, BorderLayout.SOUTH);
		this.setSize(1280, 520);
		this.setVisible(true);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
	}

	public void r1(byte[] jpeg) {
//		System.out.println("r1");
		Image image = getToolkit().createImage(jpeg);
		getToolkit().prepareImage(image, -1, -1, null);
		icon1.setImage(image);
		icon1.paintIcon(this, this.getGraphics(), 0, 0);
	}

	public void r2(byte[] jpeg) {
//		System.out.println("r2");
		Image image = getToolkit().createImage(jpeg);
		getToolkit().prepareImage(image, -1, -1, null);
		icon2.setImage(image);
		icon2.paintIcon(this, this.getGraphics(), 640, 0);
	}

	@Override
	public void actionPerformed(ActionEvent arg0) {
	}
}