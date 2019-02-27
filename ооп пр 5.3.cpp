#include "pch.h"
#include <iostream>
using namespace std;

void v(int* m1, int dl) {
	int vh, posl;
	for (int i = 1; i < dl; i++)
	{
		vh = m1[i];
		posl = i - 1;
		while (posl >= 0 && m1[posl] >vh)
		{
			m1[posl + 1] = m1[posl];
			m1[posl] = vh;
			posl--;
		}
	}
}


void v(float* m2, int dl) {
	int vh, posl;
	for (int i = 1; i < dl; i++)
	{
		vh = m2[i];
		posl = i - 1;
		while (posl >= 0 && m2[posl] > vh)
		{
			m2[posl + 1] = m2[posl];
			m2[posl] = vh;
			posl--;
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int mas1[10] = { 9,8,7,6,5,4,3,2,1,0 };
	float mas2[10] = { 3.9,7.4,1,6,3,8,6.2,99.8,1234.7,0.7 };
	int *m1 = mas1;
	float *m2 = mas2;

	v(m1,10);
	v(m2,10);
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