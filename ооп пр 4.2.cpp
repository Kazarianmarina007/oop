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
double* sort(double* uk) {//������� ����������, �������� ������� �������� � ������� � ��������� ���������
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
	double *uk;//������� ��������� �� ������ ����
	uk = vyd();//�������� ������� ��������� ������ ��� �������
	uk=zap(uk);//��������� ������
	uk=sort(uk);
	vyv(uk);//�������
	uk=udal(uk);//������� ������, ���������� ����� ��� ������� 
	cout << endl;
	system("pause");
	return 0;

}