#include "pch.h"
#include <iostream>
using namespace std;

class fig {
protected:
	int kol_ug;
	virtual void S()=0;
};
class CH_ug :public fig {
public:
	CH_ug() { 
		kol_ug = 4;
	}
};
class romb :public CH_ug {
public:
	int d1_r;
	int d2_r;
	int s_r=d1_r * d2_r / 2;
	romb(int d1, int d2) {
		d1 = d1_r;
		d2 = d2_r;
	}
	void S() {
		cout << "diamond square is "<<s_r;
	}
};

class PR_ug :public CH_ug {
public:
	int a_p;
	int b_p;
	int s_p = a_p * b_p / 2;
	PR_ug(int a, int b) {
		a = a_p;
		b = b_p;
	}
	void S() {
		cout << "rectangle square is " << s_p;
	}
};

