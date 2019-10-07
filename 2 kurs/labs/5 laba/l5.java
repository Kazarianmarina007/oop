
package laba5;

import javax.swing.*;
import java.awt.*;
import java.util.ArrayList;
import java.util.Collections;

public class l5 extends JFrame {
	int r=0,g=255,b=0;
	int x=0,y=0,h=0,w=0;
	Color e=new Color(r,g,b);
	ArrayList<Integer> cif =new ArrayList<Integer>();
	ArrayList<Integer> poz =new ArrayList<Integer>();
	ArrayList<Integer> razm =new ArrayList<Integer>();
	public l5(){
        setSize(1000,1000);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);//центрирование
        setVisible(true);
        for(int i=0; i<256; i++) {
			cif.add(i);
		}
		for(int i=30; i<600; i++) {
			poz.add(i);
		}
		for(int i=30; i<200; i++) {
			razm.add(i);
		}
		for(int i=0; i<10; i++) {
			poz.add(i);
		}
   }
	Color sh() {
		Color e1=new Color(r,g,b);
		Collections.shuffle(cif);
		r=cif.get(0);
		g=cif.get(1);
		b=cif.get(2);
		Collections.shuffle(poz);
		Collections.shuffle(razm);
		x=poz.get(0);
		y=poz.get(1);
		h=razm.get(0);
		w=razm.get(1);
		e1=new Color(r,g,b);
		return e1;
	}
	public void paint(Graphics g1){
		
		for(int i=0;i<4;i++) {
			e=sh();
			g1.setColor(e); 
			g1.fillArc(x, y, w, h, x+3, y+4);
			e=sh();
			g1.setColor(e); 
			g1.fillRect(x, y, w, h);
			e=sh();
			g1.setColor(e); 
			g1.fill3DRect(x, y, w, h, true);
			e=sh();
			g1.setColor(e); 
			g1.fillOval(x, y, w, h);
			e=sh();
			g1.setColor(e); 
			g1.fillRoundRect(x, y, w, h, 30, 30);
			
		}
    }
    

	public static void main(String[] args) {
		new l5();
	}

}

