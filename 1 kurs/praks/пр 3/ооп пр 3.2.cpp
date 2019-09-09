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
		(string) "INBO-03-18",2018,(string) "Tolik",{
		(string) "Pashka",(string)"Marinka",(string)"Lepeha",(string)"Tolik"}
	};
	system("pause");
	return 0;
}