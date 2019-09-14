package prak_5_17;

import java.util.Scanner;

public class main_5_17 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.print("Input a number: ");
        int num = in.nextInt();
        int max=num;
        while(num!=0) {
        	num=in.nextInt();
        	if(num>max) {
        		max=num;
        	}
        }
        System.out.println("max= "+max);

	}

}