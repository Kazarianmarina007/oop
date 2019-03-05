#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f;
	string k;
	cout << "¬ведите текст, который будет записана в файл: " << endl;
	getline(cin, k);
	f.open("kek.txt");
	f << k;
	f.close();
	return 0;
}