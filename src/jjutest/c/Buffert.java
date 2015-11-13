package jjutest.c;

public class Buffert {
	private int max = 64;
	private TJ[] buff = new TJ[max];
	private int putpos = 0;
	private int getpos = 0;
	private int size = 0;
	private static byte mode = 1;
	
	static void cM(){
		mode = 1;
	}
	
	synchronized void put(TJ t) {
		 System.out.println("fill "+size);
		while (size == max) {
			try {
				wait();
			} catch (Exception e) {
			}
		}

		buff[putpos] = t;
		putpos++;
		putpos %= max;
		size++;
		notifyAll();
	}

	synchronized TJ take() {
		while (size == 0) {
			try {
				wait();
			} catch (Exception e) {
			}
		}
		TJ re = buff[getpos];
		getpos++;
		getpos %= max;
		size--;
		notifyAll();
		return re;
	}

	synchronized long time() {
		if (buff[getpos] != null)
			return buff[getpos].time;
		return 0;

	}

}
