#include "pch.h"
#include <iostream>
using namespace std;

class Property {
public:
	int worth;
	Property() {}
	virtual int result() = 0;
};
class Appartment :public Property {
public:
	Appartment(int a) { worth = a; }
	int result() {
		return worth / 1000;
	}
};
class Car : public Property {
public:
	Car(int a) { worth = a; }
	int result() {
		return worth / 200;
	}
};

class CountryHouse : public Property {
public:
	CountryHouse(int a) { worth = a; }
	int result() {
		return worth / 500;
	}
};


int main() {
	setlocale(LC_ALL, "Russian");
	Property **mas = new Property*[7];
	mas[0] = new Appartment(80000);
	mas[1] = new Appartment(34500000);
	mas[2] = new Appartment(3240000);
	mas[3] = new Car(890000);
	mas[4] = new Car(12000);
	mas[5] = new CountryHouse(156000000);
	mas[6] = new CountryHouse(22300000);
	for (int i = 0; i < 7; i++) {
		cout << "Ќалог на данное имущество составл€ет: " << '\t' << mas[i]->result() << endl;
	}
	for (int i = 0; i < 7; i++) {
		delete mas[i];
	}
	delete[]mas;
	system("pause");
	return 0;
}