package prak_7;
import java.util.*;
public class pia {

	public static void main(String[] args) {
		ArrayList<Integer> cif =new ArrayList<Integer>();
		for(int i=1; i<11; i++) {
		     cif.add(i);
		}
		Collections.shuffle(cif);
		//System.out.println(cif);
		ArrayList<Integer> p1 =new ArrayList<Integer>();
		ArrayList<Integer> p2 =new ArrayList<Integer>();
		for(int i=0; i<5; i++) {
		     p1.add(cif.get(i));
		     p2.add(cif.get(i+5));
		}
		System.out.println(p1);
		System.out.println(p2);
		int hod=0;
		while ((p1.size()!=0)&&(p2.size()!=0)&&(hod<106)) {
			if((p2.get(0)==1)&&(p1.get(0)==10)) {
				p2.add(p1.get(0));
				p2.add(p2.get(0));
				p1.remove(0);
				p2.remove(0);
			}
			else if((p1.get(0)==1)&&(p2.get(0)==10)) {
				p1.add(p2.get(0));
				p1.add(p1.get(0));
				p1.remove(0);
				p2.remove(0);
			}
			else if(p1.get(0)>p2.get(0)) {
				p1.add(p2.get(0));
				p1.add(p1.get(0));
				p1.remove(0);
				p2.remove(0);
				
			}
			else {
				p2.add(p1.get(0));
				p2.add(p2.get(0));
				p2.remove(0);
				p1.remove(0);
			}
			hod++;
			System.out.println("hod "+hod);
			System.out.println(p1);
			System.out.println(p2);

		}
		if(p1.size()==0) {
			System.out.println("pobedil 2 na "+hod+" hode");
		}else if(p2.size()==0) {
			System.out.println("pobedil 1 na "+hod+" hode");
		}else {
			System.out.println("botva");
		}
	}

}
