#include "pch.h"
#include "ооп пр 3.1.cpp"
#include <string>
#include <iostream>
using namespace std;

struct biblio {
	string adress;
	string nazvanie;
	int god_otkr;
	knigga k1[10];
};
int main() {
	biblio b1 = {
		(string)"2 улица",(string)"крутая",2001,{
			{
		510,(string) "Кинг",1990,(string)" Сияние"};
	{
		400,(string) "Роулинг",2007,(string) "Гарри П"};
												}
	};
	system("pause");
	return 0;
}
