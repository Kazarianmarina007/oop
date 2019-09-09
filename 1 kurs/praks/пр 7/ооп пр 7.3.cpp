#include "pch.h"
#include <iostream>
using namespace std;

class T_S {//vehicle
protecred:
	bool prava;//driving license
	int kol_k;//number of wheels
	int kol_p;//number of passengers
};
class ab :public T_S {//bus
public:
	ab() { 
		prava = true;
		kol_k = 8;
		kol_p = 30;
	}
};
class am :public T_S {//car
public:
	am() {
		prava = true;
		kol_k = 4;
		kol_p = 3;
	}
};

class vel :public T_S {//bicycle
public:
	vel() {
		prava = false;
		kol_k = 2;
		kol_p = 0;
	}
};
