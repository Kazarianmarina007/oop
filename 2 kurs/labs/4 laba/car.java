package laba4;

public class car implements Priceable {
	static int kol;
	int price;
	String mark;
	int god;
	public car(int price, String mark, int god) {
		this.price = price;
		this.mark = mark;
		this.god = god;
	}
	public static int getKol() {
		return kol;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	public String getMark() {
		return mark;
	}
	public int getGod() {
		return god;
	}
	
}
