#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double t, y, a = 4.6, b = 1.5;
	if (a <= b) {y = ((a - b) / (a + b))*((a + b) / (a*a - a * b +b * b));}//proverka sootnoshenia a i b
	else y = a + log(b*b);
	if (y == b) {t = (2 * y + pow((y*y - a), (1.0 / 2))) / (2 * b- pow((a*a - y), (1.0 / 2)));}//proverka sootnoshenia y i b
	else if (y < b) {t = pow((sin(y)), 2) + (1.0 / (tan(a - b)));}
	else t = pow((y*sin(a)), (1.0 / 3)) + (1.0 / (pow((y*cos(b)),(1.0 / 2))));
	if (t != t) {//proverka na NAN
		if (y != y) { cout << "pri ishodnih dannyh nevozmojno poschitat i t i y, " << "a= " << a << ", b= " << b << endl; }
		else { cout << "pri ishodnih dannyh nevozmojno poschitat t, " << "a= " << a << ", b= " << b << ", y= " << y << endl; }
	}
	else if (y != y) { cout << "pri ishodnih dannyh nevozmojno poschitat y, " << "a= " << a << ", b= " << b << ", t= " << t << endl; }
	else cout << "a= " << a << ", b= " << b << ", y= " << y << ", t= " << t << endl;
	system("pause");
	return 0;
}