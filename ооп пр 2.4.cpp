#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double t, y, a = 3.5, x=-0.7;
	if (a <= x) { y =a+log(x+a) ; }//проверяем соотношение a и x и исходя из этого вычисляем y
	else y = pow((sin(a*x)),(1.0/2));
	if (a>y) { t =y/(a-x) ; }//проверяем соотношение a и y и исходя из этого вычисляем t
	else if (a==y) { t = (y / (a - x))+((a+x)/(y*y)); }
	else t =tan(a*x)+cos(2*a*y);
	if (t != t) {//проверка на то, что числа не являются NAN
		if (y != y) { cout << "при исходных данных невозможно посчитать и t и y, " << "a= " << a << ", x= " << x << endl; }
		else { cout << "при исходных данных невозможно посчитать t, " << "a= " << a << ", x= " << x << ", y= " << y << endl; }}
	else if (y != y)  { cout << "при исходных данных невозможно посчитать y, " << "a= " << a << ", x= " << x << ", t= " << t << endl; }
	else cout << "a= " << a << ", x= " << x << ", t= " << t <<", y= "<< y << endl;
	system ("pause");
	return 0;
}