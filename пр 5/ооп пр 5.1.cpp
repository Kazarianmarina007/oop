#include "pch.h"
#include <iostream>
using namespace std;

int* p(int* m1) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (m1[j] > m1[j + 1]) swap(m1[j], m1[j + 1]);
		}
	}
	return m1;
}
float* p(float* m2) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (m2[j] > m2[j + 1]) swap(m2[j], m2[j + 1]);
		}
	}
	return m2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int mas1[10] = { 9,8,7,6,5,4,3,2,1,0 };
	float mas2[10] = { 3.9,7.4,1,6,3,8,6.2,99.8,1234.7,0.7 };
	int *m1 = mas1;
	float *m2 = mas2;

	p(m1);
	p(m2);
	cout << endl << "массив int: " << endl;
	for (int j = 0; j < 10; j++) {
		cout << mas1[j] << " ";
	}
	cout << endl << "массив float: " << endl;
	for (int j = 0; j < 10; j++) {
		cout << mas2[j] << " ";
	}
	system("pause");
	return 0;
}