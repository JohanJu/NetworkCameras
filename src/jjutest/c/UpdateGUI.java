package jjutest.c;

public class UpdateGUI implements Runnable {
	GUI g = new GUI();
	Buffert buff[];
	boolean sync = true;
	public UpdateGUI(Buffert[] buff) {
		this.buff = buff;
	}

	public void run() {
		while (sync) {
			long st;
			while(true){
				st = System.currentTimeMillis();
				if(buff[0].time()<st){
					g.r1(buff[0].take().jpeg);
				}
				if(buff[1].time()<st){
					g.r2(buff[1].take().jpeg);
				}
				try {
					Thread.sleep(1);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
//			g.r1(buff[0].take().jpeg);
//			System.out.println(buff[0].time());
//			g.r2(buff[1].take().jpeg);
//			System.out.println(buff[1].time());
		}
	}
}
