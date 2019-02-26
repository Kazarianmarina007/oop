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
double* sort(double* uk) {//функци€ сортировки, мен€юща€ местами элементы с четными и нечетными позици€ми
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
	double *uk;//создаем указатель на массив дабл
	uk = vyd();//вызываем функцию выделени€ пам€ти дл€ массива
	uk=zap(uk);//заполн€ем массив
	uk=sort(uk);
	vyv(uk);//выводим
	uk=udal(uk);//удал€ем пам€ть, выделенную ранее дл€ массива 
	cout << endl;
	system("pause");
	return 0;

}