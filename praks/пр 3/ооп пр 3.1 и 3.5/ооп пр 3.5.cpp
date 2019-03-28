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
		(string)"2 ulica",(string)"krutaia",2001,{
			{
		510,(string) "King",1990,(string)" sianie"};
	{
		400,(string) "Rowling",2007,(string) "Harry P"};
												}
	};
	system("pause");
	return 0;
}
