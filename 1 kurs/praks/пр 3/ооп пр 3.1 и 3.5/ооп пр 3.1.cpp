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
		510,(string) "King",1990,(string)" Sianie"
	};
	Knigga k2 = {
		400,(string) "Rowling",2007,(string) "Harry P"
	};
	system("pause");
	return 0;
}
