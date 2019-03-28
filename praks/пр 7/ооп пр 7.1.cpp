#include "pch.h"
#include <iostream>
using namespace std;

class animal {
protected:
	string klichka;
	int ves;
	int rost;
	virtual void zvuk() = 0;
};
class kot :public animal {
public:
	string kon = "lapki";
	kot(string kl,int v,int r) { 
		kl= klichka;
		v = ves;
		r = rost;
	}
	void zvuk() {
		cout<<"rrrr,I want to roar,not to mew";
	}
};
class sob :public animal {
public:
	string kon = "lapki";
	sob(string kl, int v, int r) {
		kl = klichka;
		v = ves;
		r = rost;
	}
	void zvuk() {
		cout << "this cat make me crazy";
	}
};

class pop :public animal {
public:
	string kon = "krylia";
	pop(string kl, int v, int r) {
		kl = klichka;
		v = ves;
		r = rost;
	}
	void zvuk() {
		cout << "I want to carnival in Rio,but not this here";
	}
};


