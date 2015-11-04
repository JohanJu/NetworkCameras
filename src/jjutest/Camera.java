package jjutest;

import java.awt.BorderLayout;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.concurrent.Semaphore;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingUtilities;

import se.lth.cs.eda040.fakecamera.AxisM3006V;

@SuppressWarnings("serial")
public class Camera extends JFrame implements Runnable, ActionListener{
	ImageIcon icon;
	JButton jb;
	Semaphore sem = new Semaphore(0);

	public static void main(String[] args) {
		Camera viewer = new Camera();
		(new Thread(viewer)).start();
	}

	public Camera() {
	    super();
	    getContentPane().setLayout(new BorderLayout());
	    icon = new ImageIcon();
	    JLabel label = new JLabel(icon);
	    jb = new JButton("Next");
	    jb.addActionListener(this);
	    add(label, BorderLayout.NORTH);
	    add(jb, BorderLayout.SOUTH);
//	    this.pack();
	    this.setSize(640, 520);
	    this.setVisible(true);
	    this.setDefaultCloseOperation(EXIT_ON_CLOSE);
	  }

	public void run() {
		AxisM3006V cam = new AxisM3006V();
		cam.init();
		cam.connect();
		for (int i = 0; i < 100; i++) {
			try {
				sem.acquire();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
			
			final byte[] jpeg = new byte[AxisM3006V.IMAGE_BUFFER_SIZE];
			int si = cam.getJPEG(jpeg, 0);
			System.out.println(si);
			SwingUtilities.invokeLater(new Runnable() {
				public void run() {
					refreshImage(jpeg);
				}
			});
		}
		cam.close();
		cam.destroy();
	}

	public void refreshImage(byte[] jpeg) {
		Image image = getToolkit().createImage(jpeg);
		getToolkit().prepareImage(image, -1, -1, null);
		icon.setImage(image);
		icon.paintIcon(this, this.getGraphics(), 0, 0);
	}

	@Override
	public void actionPerformed(ActionEvent arg0) {
		sem.release();
	}
}
