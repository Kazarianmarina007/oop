#include "pch.h"
#include "��� �� 3.1.cpp"
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
		(string)"2 �����",(string)"������",2001,{
			{
		510,(string) "����",1990,(string)" ������"};
	{
		400,(string) "�������",2007,(string) "����� �"};
												}
	};
	system("pause");
	return 0;
}
