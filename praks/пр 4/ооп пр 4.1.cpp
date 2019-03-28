#include "pch.h"
#include <iostream>
using namespace std;

double* vyd(int size) {
	double *uk2 = new double[size];
	return uk2;
}
double* zap(int size, double* uk) {
	for (int i = 0; i < size; i++) {
		uk[i] = i;
	}
	return uk;
}
void vyv(int size, double* uk) {
	for (int i = 0; i < size; i++) {
		cout << uk[i] << " ";
	}
}
double* udal(double* uk) {
	delete[] uk;
	return uk;
}
int main() {
label:
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "enter the array size: ";
	cin >> size;
	double *uk;//sozdaem ukazatel na massiv double
	uk = vyd(size);// vyzivaem funkciu vydelenia pamiati dlia massiva 
	uk = zap(size, uk);//zapolniaem massiv
	vyv(size, uk);//vyvodim
	uk=udal(uk);//udaliaem pamat, vydelennuu ranee dlia massiva 
	cout << endl;
	cout << "1.continue creating array or 2.exit? ";
	cout << "choose the number of operation";
	int otvp;
	cin >> otvp;
	if (otvp == 1) goto label;//esli nujno,povtoriaem s nachala
	system("pause");
	return 0;

}