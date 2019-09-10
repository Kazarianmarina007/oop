package laba4;

public class pechenka implements Priceable {
	String mark;
	int price;
	int srG;//srok godnosti
	public pechenka(String mark, int price, int srG) {
		this.mark = mark;
		this.price = price;
		this.srG = srG;
	}
	public String getMark() {
		return mark;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	public int getSrG() {
		return srG;
	}
}
