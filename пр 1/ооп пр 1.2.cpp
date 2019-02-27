

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	double p, vt;
	cout << "vvedite pervoe chislo,esli drobnoe,to cherez tochku ";//запрос первого числа
	cin >> p;
	cout << endl << "vvedite vtoroe chislo,esli drobnoe,to cherez tochku ";//запрос второго
	cin >> vt;
	cout << endl;
	cout << "vyberi deistvie" << endl << " 1.slojit" << endl << " 2.peremnojit";//предлагаем варианты действий, которые может выполнить данная программа
	cout << endl<< " 3.vychest iz 1ogo 2oe " << endl << " 4.vychest iz 2ogo 1oe";
	cout << endl<<" 5.podelit 1oe na 2oe" << endl << " 6.podelit 2oe na 1oe ";
	cout << endl << "vvedite nomer operacii ";
	int op;
	cin >> op;//выясняем,какую операцию пользователю надо произвести
	switch (op) {//в зависимости от ответа выполняем нужное действие
	case 1: cout << endl << "resultat: " << p+vt ; break;
	case 2: cout << endl << "resultat: " << p * vt; break;
	case 3: cout << endl << "resultat: " << p - vt; break;
	case 4: cout << endl << "resultat: " << vt - p; break;
	case 5: if (vt != 0) cout << endl << "resultat: " << p / vt; else cout << "nevozmojno " << endl;; break;//а также проверяем, является ли числилель нулем
	case 6: if (p != 0)cout << endl << "resultat: " << vt / p; else cout << "nevozmojno" << endl; break;
	}
	cout << endl;
	system ("pause");
	return 0;
}
	system ("pause");
	return 0;
}