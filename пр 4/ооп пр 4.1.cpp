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
	cout << "Ввести размерность массива: ";
	cin >> size;
	double *uk;//создаем указатель на массив дабл
	uk = vyd(size);//вызываем функцию выделения памяти для массива
	uk = zap(size, uk);//заполняем массив
	vyv(size, uk);//выводим
	uk=udal(uk);//удаляем память, выделенную ранее для массива 
	cout << endl;
	cout << "1.продолжить создавать массивы или 2.выйти? ";
	cout << "выберите номер операции";
	int otvp;
	cin >> otvp;
	if (otvp == 1) goto label;//если нужно, то повторям все снова
	//delete[] uk;
	system("pause");
	return 0;

}