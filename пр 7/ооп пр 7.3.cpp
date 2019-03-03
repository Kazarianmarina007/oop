#include "pch.h"
#include <iostream>
using namespace std;

class T_S {//транспортное средство
public:
	bool prava;//необходимость прав
	int kol_k;//кол-во колес
	int kol_p;//кол-во пассажиров
};
class ab :public T_S {//автобус
public:
	ab() { 
		prava = true;
		kol_k = 8;
		kol_p = 30;
	}
};
class am :public T_S {//автомобиль
public:
	am() {
		prava = true;
		kol_k = 4;
		kol_p = 3;
	}
};

class vel :public T_S {//велик
public:
	vel() {
		prava = false;
		kol_k = 2;
		kol_p = 0;
	}
};
