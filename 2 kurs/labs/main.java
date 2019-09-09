package laba_1;
import java.util.Random;

public class main {

	public static void main(String[] args) {
		int[] mas =new int[10];
		Random rnd = new Random(System.currentTimeMillis());
		for (int i=0;i<10;i++) {
			mas[i]=0 + rnd.nextInt(10 - 0 + 1);
			System.out.print(" "+mas[i]);
		}
		for (int i=0;i<10;i++) {
			for (int j=0;j<9;j++) {
				if(mas[j]>mas[j+1]) {
					int o=mas[j];
					mas[j]=mas[j+1];
					mas[j+1]=o;
				}
			}
		}
		System.out.println();
		for (int i=0;i<10;i++) {
			System.out.print(" "+mas[i]);
		}
		
	}

}




