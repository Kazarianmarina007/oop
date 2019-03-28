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
		cout << "the file didn't exist, but it will be created automatically" << endl;
		cout << "write data on the file and restart the programm" << endl;
		sozd_f.open("kek.txt");
		sozd_f.close();
	}
	return 0;
}