#include "pch.h"
#include "Complex.h"

int main() {
	setlocale(LC_ALL, "Russian");
	ifstream f1;
	f1.open("kek.txt");
	int kol;
	f1 >> kol;
	Co* mas = new Co[kol];
	for (int i = 0; i < kol; i++) {
		f1 >> mas[i].re;
		f1 >> mas[i].im;
	}
	f1.close();
	int mI = 0;
	float mZ = abs(mas[0]);
	for (int i = 0; i < kol; i++) {
		if (mZ <= abs(mas[i])) {
			mI = i;
			mZ = abs(mas[i]);
		}
	}
	cout << "Максимальное по модулю комплексное число имеет номер: " << mI << endl;
	delete[] mas;
	mas = NULL;
	system("pause");
	return 0;
}// main_lab1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
