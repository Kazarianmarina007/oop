package kniga;

public class knigga {
	public int kolstr;
	public String nazv;
	public  int god_izd;
	knigga(int k,String n, int g_d){
		kolstr=k;
		nazv=n;
		god_izd=g_d;
		System.out.println(k+n+g_d);
	}
	public void vozr(int v) {
		int u=v-god_izd;
		System.out.println("knige "+nazv+" "+u+" let");
	}
}
