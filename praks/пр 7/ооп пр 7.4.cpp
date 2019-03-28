#include "pch.h"
#include <iostream>
using namespace std;

class ekran {//screen
protected:
	bool touch;//touch control
	int di;//diagonal
};
class klava{ //keyboard
protected:
	bool podsv;//presence of backlight
	bool dop_k;//having an extra keyboard on the right
};
class nout :public ekran,public klava {//laptop
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
class komp :public ekran, public klava {//personal computer
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
class tel :public ekran, public klava {//telephone
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