package demo;

public class Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
/*

client

byte[] tb = new byte[8];
is.read(tb, 0, 8);
byte mode = (byte) is.read();
byte hi = (byte) is.read();
byte lo = (byte) is.read();
put.time = timeMillisFromArray(tb);

int bytesLeft = 0;
int bytesRead = 0;
int status = 0;
int size = (hi & 0xFF) * 255 + (lo & 0xFF);
bytesLeft = size;

do {
	status = is.read(put.jpeg, bytesRead, bytesLeft);
	if (status > 0) {
		bytesRead += status;
		bytesLeft -= status;
	}
} while (status >= 0 && bytesLeft > 0);


server

int len = cam.getJPEG(jpeg, 0);
					cam.getTime(time, 0);
					byte hi = (byte) (len / 255);
					byte lo = (byte) (len % 255);
					os.write(time, 0, time.length);
					os.write(Server.mode);
					os.write(hi);
					os.write(lo);
					os.write(jpeg, 0, len);
*/