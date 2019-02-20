#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Knigga {
	int kol_str;
	string avtor;
	int god_izdania;
	string ima_kniggi;
};
int main() {
	setlocale(LC_ALL, "Russian");
	Knigga k1 = {
		510,(string) "Кинг",1990,(string)" Сияние"
	};
	Knigga k2 = {
		400,(string) "Роулинг",2007,(string) "Гарри П"
	};
	system("pause");
	return 0;
}
