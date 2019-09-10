package laba3;

abstract public class Dish {
	public String color;
	protected int kol;
	static int kol_p;
	protected String tip;
	
	Dish(){
		kol_p++;
	}
	void tipok() {
		System.out.println(tip);
	}
	void setColor(String color) {
		this.color=color;
	}
	
}
