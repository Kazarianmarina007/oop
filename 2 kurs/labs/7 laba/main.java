import java.util.ArrayList;
public class main {
	public static void main(String[] arg) {
	ArrayList<Integer> colors = new ArrayList<Integer>();
	colors.add(34);
	colors.add(19);
	colors.add(35);
	colors.add(78);
	System.out.println("isnach mas ");
	for (int i=0;i<4;i++) {
		System.out.println(colors.get(i));
	}
	colors.remove(1);
	System.out.println("ismen mas ");
	for (int i=0;i<3;i++) {
		System.out.println(colors.get(i));
	}
	System.out.println("vtoroy"+colors.get(2));
	
	}
}
