#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

struct gruppa {
	string nazv;
	int god_form;
	string starosta;
	string fio[30];
};
int main() {
	setlocale(LC_ALL, "Russian");
	gruppa g1={
		(string) "ИНБО-03-18",2018,(string) "Толик",{
		(string) "Пашка",(string)"Маринка",(string)"Лепеха",(string)"Толик"}
	};
	system("pause");
	return 0;
}