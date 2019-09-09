#include "pch.h"
#include <iostream>
using namespace std;

int sl(int p, int vt) {
	return p + vt;
}
float sl(float p, float vt) {
	return p + vt;
}
int per(int p, int vt) {
	return p * vt;
}
float per(float p, float vt) {
	return p * vt;
}
int vych(int p, int vt) {
	return p - vt;
}
float vych(float p, float vt) {
	return p - vt;
}
int de(int p, int vt) {
	return p/vt;
}
float de(float p, float vt) {
	return p / vt;
}

int main() {
	setlocale(LC_ALL, "Russian");
	float p, vt;
	cout << "vvedite pervoe chislo,esli drobnoe,to cherez tochku ";
	cin >> p;
	cout << endl << "vvedite vtoroe chislo,esli drobnoe,to cherez tochku ";
	cin >> vt;
	cout << endl;
	cout << "vyberi deistvie" << endl << " 1.slojit" << endl << " 2.peremnojit";
	cout << endl << " 3.vychest iz 1ogo 2oe " << endl << " 4.vychest iz 2ogo 1oe";
	cout << endl << " 5.podelit 1oe na 2oe" << endl << " 6.podelit 2oe na 1oe ";
	cout << endl << "vvedite nomer operacii ";
	int op;
	cin >> op;
	double r;
	switch (op) {
	case 1: cout << endl << "resultat: "; r = sl(p, vt); cout << r; break;
	case 2: cout << endl << "resultat: ";r= per(p, vt); cout << r; break;
	case 3: cout << endl << "resultat: ";r= vych(p, vt); cout << r; break;
	case 4: cout << endl << "resultat: ";r= vych(vt, p); cout << r; break;
	case 5: if (vt != 0) cout << endl << "resultat: "; else cout << "nevozmojno " << endl;r= de(p, vt);  cout << r; break;
	case 6: if (p != 0)cout << endl << "resultat: "; else cout << "nevozmojno" << endl;r= de(vt, p); break;
	}
	cout << endl;
	system("pause");
	return 0;
}