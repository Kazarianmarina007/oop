package prak_5_15;

public class rek_5_15 {
	int x;
	public void resh(int y) {
		if (y>9) {
			System.out.println(y%10);
			resh(y/10);
		}
		else { 
			System.out.println(y);
			y=y/10;
		}
	}
}

