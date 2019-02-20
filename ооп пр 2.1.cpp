#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double m, n, a = 4.8, b = -7.9;
	if (a >= b) { n = pow((a - b), (1.0 / 3)); }//проверяем соотношение a и b и исходя из этого вычисляем n
	else n = pow(a, 2) + ((a - b) / sin(a*b));
	if (n < b) { m = ((n + a) / (-b)) + pow((pow(sin(a), 2) - cos(n)), (1.0 / 2)); }//проверяем соотношение n и b и исходя из этого вычисляем m
	else if (n == b) { m = pow(b, 2) + tan(n*a); }
	else m = pow(b, 3) + n * pow(a, 2);
	if (m != m) {//проверка на то, что числа не являются NAN
		if (n != n) { cout << "при исходных данных невозможно посчитать и m и n, " << "a= " << a << ", b= " << b << endl; }
		else { cout << "при исходных данных невозможно посчитать m, " << "a= " << a << ", b= " << b << ", n= " << n << endl; }
	}
	else if (n != n) { cout << "при исходных данных невозможно посчитать n, " << "a= " << a << ", b= " << b << ", m= " << m << endl; }
	else cout << "a= " << a << ", b= " << b << ", m= " << m << ", n= " << n << endl;
	system("pause");
	return 0;
}