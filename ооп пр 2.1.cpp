#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double m, n, a = 4.8, b = -7.9;
	if (a >= b) { n = pow((a - b), (1.0 / 3)); }//��������� ����������� a � b � ������ �� ����� ��������� n
	else n = pow(a, 2) + ((a - b) / sin(a*b));
	if (n < b) { m = ((n + a) / (-b)) + pow((pow(sin(a), 2) - cos(n)), (1.0 / 2)); }//��������� ����������� n � b � ������ �� ����� ��������� m
	else if (n == b) { m = pow(b, 2) + tan(n*a); }
	else m = pow(b, 3) + n * pow(a, 2);
	if (m != m) {//�������� �� ��, ��� ����� �� �������� NAN
		if (n != n) { cout << "��� �������� ������ ���������� ��������� � m � n, " << "a= " << a << ", b= " << b << endl; }
		else { cout << "��� �������� ������ ���������� ��������� m, " << "a= " << a << ", b= " << b << ", n= " << n << endl; }
	}
	else if (n != n) { cout << "��� �������� ������ ���������� ��������� n, " << "a= " << a << ", b= " << b << ", m= " << m << endl; }
	else cout << "a= " << a << ", b= " << b << ", m= " << m << ", n= " << n << endl;
	system("pause");
	return 0;
}