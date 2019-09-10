package Circle_pack;

public class Circle {
	private double dl;
	private double rad;
	public double getDl() {
		dl=Math.PI*rad*2;
		return dl;
	}
	public double getRad() {
		return rad;
	}
	public void setRad(double rad) {
		this.rad = rad;
	}
}
