#include "pch.h"
#include <iostream>
using namespace std;

double* vyd() {
	double *uk2 = new double[12];
	return uk2;
}
double* zap(double* uk) {
	for (int i = 0; i < 12; i++) {
		uk[i] = i;
	}
	return uk;
}
double* sort(double* uk) {//funkcia sortirovki,meniaushaa mestami elementy s chetnimi i nechetnumi posiciami 
	for (int i = 0; i < 11; i++) {
		if (i % 2 == 0) {
			swap(uk[i], uk[i + 1]);
		}
	}
	return uk;
}
void vyv(double* uk) {
	for (int i = 0; i < 12; i++) {
		cout << uk[i] << " ";
	}
}
double* udal(double* uk) {
	delete[] uk;
	return uk;
}
int main() {
	setlocale(LC_ALL, "Russian");
	double *uk;//sozdaem ukazatel na massiv double
	uk = vyd();//vyzivaem funkciu vydelenia pamiati dlia massiva 
	uk=zap(uk);//zapolniaem massiv
	uk=sort(uk);
	vyv(uk);//vyvodim
	uk=udal(uk);//udaliaem pamat, vydelennuu ranee dlia massiva 
	cout << endl;
	system("pause");
	return 0;

}