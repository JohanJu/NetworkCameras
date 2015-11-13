package jjutest;

import java.awt.BorderLayout;

import java.awt.Image;
import java.lang.reflect.InvocationTargetException;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;

import se.lth.cs.eda040.proxycamera.AxisM3006V;

@SuppressWarnings("serial")
public class PC extends JFrame implements Runnable{
  private ImagePanel imagePanel;
  private boolean firstCall = true;
  private final byte[] jpeg = new byte[AxisM3006V.IMAGE_BUFFER_SIZE];
  private final byte[] timestamp = new byte[AxisM3006V.TIME_ARRAY_SIZE];

  public static void main(String[] args) {
    Thread viewer = new Thread(new PC());
    viewer.start();
    try {
      viewer.join();
    } catch (InterruptedException e) {
      e.printStackTrace();
    }
  }

  public PC() {
    super();
    imagePanel = new ImagePanel();
    this.getContentPane().setLayout(new BorderLayout());
    this.getContentPane().add(imagePanel, BorderLayout.CENTER);
    this.setLocationRelativeTo(null);
    this.pack();
  }

  public void run() {
    AxisM3006V cam = new AxisM3006V();
    cam.init();
    cam.setProxy("argus-5.student.lth.se", 55555);
    cam.connect();
    while (!Thread.interrupted()) {
      cam.getJPEG(jpeg, 0);
      if (cam.motionDetected()) System.out.println("Motion detected!");
      cam.getTime(timestamp, 0);
      long diff = System.currentTimeMillis() - timeMillisFromArray(timestamp);
      System.out.println("Diff " + diff);
      try {
        refreshImage(jpeg);
      } catch (InvocationTargetException | InterruptedException e) {
        e.printStackTrace();
      }
    }
    cam.close();
    cam.destroy();
  }
  
  public void refreshImage(final byte[] jpeg) throws InvocationTargetException, InterruptedException {
    SwingUtilities.invokeAndWait(new Runnable() {
      public void run() {
        imagePanel.refresh(jpeg);
      }
    });
    if (firstCall) {
      final JFrame frame = this;
      SwingUtilities.invokeAndWait(new Runnable() {
        public void run() {
          frame.pack();
          frame.setSize(640, 480);
          frame.setVisible(true);
        }
      });
      firstCall = false;
    }
  }
  
  private static long timeMillisFromArray(byte[] array) {
    long time = 0;
    for (int i=0; i<AxisM3006V.TIME_ARRAY_SIZE; i++)
      time = (time << 8) | (array[i] & 0xFF);
    return time;
  }
  
  private static class ImagePanel extends JPanel {
    ImageIcon icon;

    public ImagePanel() {
      super();
      icon = new ImageIcon();
      JLabel label = new JLabel(icon);
      add(label, BorderLayout.CENTER);
    }

    public void refresh(byte[] jpeg) {
      Image image = getToolkit().createImage(jpeg);
      getToolkit().prepareImage(image,-1,-1,null);
      icon.setImage(image);
      icon.paintIcon(this, this.getGraphics(), 0, 0);
    }
  }
}