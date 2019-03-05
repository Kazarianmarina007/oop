#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	ofstream sozd_f;
	ifstream sch_f;
	sch_f.open("kek.txt");
	if (sch_f.is_open()) {
		string k;
		while (!sch_f.eof()) {
			sch_f >> k;
			cout << k << endl;
		}
		sch_f.close();
	}
	else {
		cout << "Файла не было,но сейчас он создастся автоматичеки" << endl;
		cout << "Запишите данные в файл и перезапустите программу." << endl;
		sozd_f.open("kek.txt");
		sozd_f.close();
	}
	return 0;
}