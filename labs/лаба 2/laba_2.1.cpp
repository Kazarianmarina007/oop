#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

string p1(string a, string b);
string p2(string a, string b);

int main()
{
	setlocale(LC_ALL, "Russian");
	string a, b,d;
	char c;
	string (*f)(string, string);
    cout << "введите два слова"<<endl;
	cin >> a >> b;
	cout << endl;
	cout << "в каком порядке вывести" << endl << "1) 1 2 " << endl << "2) 2 1" << endl;
	cin >> c;
	switch (c) {
	case '1':f = p1; break;
	case '2':f = p2; break;
	default:f = NULL; break;
	}
	d = f(a, b);
	cout << "ответ: " << d;
	f = NULL;
	system("pause");
	return 0;

}
string p1(string a, string b) {
	string c = a + ' ' + b;
	return c;
};
string p2(string a, string b) {
	string c = b + ' ' + a;
	return c;
};