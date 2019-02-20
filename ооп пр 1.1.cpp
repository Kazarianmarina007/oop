#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Write your name please ";//запрашиваем ввод имени
	string ima;
	cin >> ima;//считываем имя
	cout << endl;
	cout << "Hello, " << ima << "! nice to meet you"<< endl; //вывводим результат
	system ("pause");
	return 0;
}


