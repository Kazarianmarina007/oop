package laba3;

public class lojka extends Dish{
	boolean mat;//material 0-derevo 1-metel
	lojka(){
		color="black";
		tip = "lojka";
	}
	lojka(boolean mat){
		this.mat=mat;
		color="black";
		tip = "lojka";
	}
	void mater() {
		if(mat=true) {
			System.out.println("lojka is dereva");
		}
		else {
			System.out.println("lojka is metala");
		}
	}
}
