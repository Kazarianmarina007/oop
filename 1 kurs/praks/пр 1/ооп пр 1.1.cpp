#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Write your name please ";//zaprashivaem vvod imeni
	string ima;
	cin >> ima;//schityvaem ima
	cout << endl;
	cout << "Hello, " << ima << "! nice to meet you"<< endl; //vyvodim resultat
	system ("pause");
	return 0;
}


