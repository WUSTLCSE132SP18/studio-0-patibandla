
public class Heartbeat {
	public static void main (String[] args) {
		int time = 0;
		while (time < 100) {
			try {
				Thread.sleep(1000);
				time += 1;
				System.out.println(time + "s");
			}
			catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}
