#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double t, y, a = 3.5, x=-0.7;
	if (a <= x) { y =a+log(x+a) ; }//proverka sootnoshenia a i x
	else y = pow((sin(a*x)),(1.0/2));
	if (a>y) { t =y/(a-x) ; }//proverka sootnoshenia a i y
	else if (a==y) { t = (y / (a - x))+((a+x)/(y*y)); }
	else t =tan(a*x)+cos(2*a*y);
	if (t != t) {//proverka na NAN
		if (y != y) { cout << "pri ishodnih dannyh nevozmojno poschitat i t i y, " << "a= " << a << ", x= " << x << endl; }
		else { cout << "pri ishodnih dannyh nevozmojno poschitat t, " << "a= " << a << ", x= " << x << ", y= " << y << endl; }}
	else if (y != y)  { cout << "pri ishodnih dannyh nevozmojno poschitat y, " << "a= " << a << ", x= " << x << ", t= " << t << endl; }
	else cout << "a= " << a << ", x= " << x << ", t= " << t <<", y= "<< y << endl;
	system ("pause");
	return 0;
}