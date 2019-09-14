package prak_5_16;
import java.util.Scanner;

public class main_5_16 {
	void resh(int y) {
		
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.print("Input a number: ");
        int num = in.nextInt();
        int max=num;
        int kol=1;
        while(num!=0) {
        	num=in.nextInt();
        	if(num>max) {
        		max=num;
        		kol=1;
        	}
        	else if(num==max){
        		kol++;
        	}
        }
        System.out.println("kol= "+kol+" max= "+max);
        
	}
	
	
