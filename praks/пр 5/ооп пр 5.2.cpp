#include "pch.h"
#include <iostream>
using namespace std;

int* s(int* m1, int dl) {
	int st = 0;
	while (st != dl) {
		int minI = st;
		for (int i = st; i < dl; i++) {
			if (m1[minI] > m1[i]) minI = i;
		}
		swap(m1[st], m1[minI]);
		st++;
	}
	return m1;
}
float* s(float* m2, int dl) {
	int st = 0;
	while (st != dl) {
		int minI = st;
		for (int i = st; i < dl; i++) {
			if (m2[minI] > m2[i]) minI = i;
		}
		swap(m2[st], m2[minI]);
		st++;
	}
	return m2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int mas1[10] = { 9,8,7,6,5,4,3,2,1,0 };
	float mas2[10] = { 3.9,7.4,1,6,3,8,6.2,99.8,1234.7,0.7 };
	int *m1 = mas1;
	float *m2 = mas2;

	s(m1, 10);
	s(m2, 10);
	cout << endl << "array of int: " << endl;
	for (int j = 0; j < 10; j++) {
		cout << mas1[j] << " ";
	}
	cout << endl << "array of float: " << endl;
	for (int j = 0; j < 10; j++) {
		cout << mas2[j] << " ";
	}
	system("pause");
	return 0;
}