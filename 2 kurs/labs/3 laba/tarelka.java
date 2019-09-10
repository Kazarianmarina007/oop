package laba3;

public class tarelka extends Dish{
	boolean nap;//napolnenie 1-polnoe 0-pustoe
	tarelka(){
		color="red";
		tip = "tarelka";
	}
	tarelka(boolean nap){
		this.nap=nap;
		color="red";
		tip = "tarelka";
	}
	void Nap() {
		if(nap=true) {
			System.out.println("tarelka napolnena");
		}
		else {
			System.out.println("tarelka pustaya");
		}
		
	}
	
}
