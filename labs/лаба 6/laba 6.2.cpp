#include "pch.h"
#include <iostream>
using namespace std;

class alive {
protected:
	int ves;
	int rost;
	alive ( int v, int r) {
		v = ves;
		r = rost;
	}
	virtual void zvuk() = 0;
};
class animal :public alive {
public:
	string kon = "lapki";
	bool hvost;
	animal( int v, int r, bool hv) :alive( v, r) {
		hvost = hv;
	}
	void zvuk() {
		cout << "rrrr,I want to roar,not to mew";
	}
};
class fish :public alive {
public:
	int kolplavn;
	string kon = "plavniki";
	fish( int v, int r, int kolp) :alive( v, r) {
		kolplavn = kolp;
	}
	void zvuk() {
		cout << "i want to fly";
	}
};

class bird :public alive {
public:
	string kon = "krylia";
	int r_pera;
	bird(int v, int r, int r_p) :alive( v, r) {
		r_pera = r_p;
	}
	void zvuk() {
		cout << "I want to carnival in Rio,but not this here";
	}
};

