#include "pch.h"
#include <iostream>
using namespace std;

class ekran {//экран
protected:
	bool touch;//возможность сенсорного управления
	int di;//диагональ
};
class klava{ //клавиатура
protected:
	bool podsv;//наличие подсветки
	bool dop_k;//наличие доп клавы справа
};
class nout :public ekran,public klava {//ноутбук
public:
	string marka;
	nout(string m, bool t,int d,bool p,bool k) {
		marka = m;
		touch = t;
		di = d;
		podsv=p;
		dop_k = k;
	}
};
class komp :public ekran, public klava {//персональный компьютер
public:
	string marka;
	komp(string m,  int d, bool p) {
		marka = m;
		touch = false;
		di = d;
		podsv = p;
		dop_k = true;
	}
};
class tel :public ekran, public klava {//телефон
public:
	string marka;
	tel(string m, bool t, int d, bool p,bool k) {
		marka = m;
		touch = t;
		di = d;
		if (t) {
			podsv = p;
			dop_k = k;
		}
		else {
			podsv = NULL;
			dop_k = NULL;
		}
	}
};