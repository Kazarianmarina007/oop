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
	cout << "������ ����������� �������: ";
	cin >> size;
	double *uk;//������� ��������� �� ������ ����
	uk = vyd(size);//�������� ������� ��������� ������ ��� �������
	uk = zap(size, uk);//��������� ������
	vyv(size, uk);//�������
	uk=udal(uk);//������� ������, ���������� ����� ��� ������� 
	cout << endl;
	cout << "1.���������� ��������� ������� ��� 2.�����? ";
	cout << "�������� ����� ��������";
	int otvp;
	cin >> otvp;
	if (otvp == 1) goto label;//���� �����, �� �������� ��� �����
	//delete[] uk;
	system("pause");
	return 0;

}