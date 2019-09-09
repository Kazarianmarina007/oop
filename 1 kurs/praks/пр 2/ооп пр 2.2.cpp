#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double t, z, a = -0.6, b = 5.3;
	if (a < b) { z = pow(abs(a*a - b * b), (1.0 / 2)); }//proverka sootnoshenia a i b
	else z = 1 - 2 * cos(a) *sin(b);
	if (z < b) { t = pow((z + a * a*b), (1.0 / 3)); }//proverka sootnoshenia z i b
	else if (z == b) { t = 1 - log10(z) + cos(a*a*b); }
	else t = 1 / cos(z*a);
	if (t != t) {//proverka na NAN
		if (z != z) { cout << "pri ishodnih dannyh nevozmojno poschitat i t i z, " << "a= " << a << ", b= " << b << endl; }
		else { cout << "pri ishodnih dannyh nevozmojno poschitat t, " << "a= " << a << ", b= " << b << ", z= " << z << endl; }
	}
	else if (z != z) { cout << "pri ishodnih dannyh nevozmojno poschitat z, " << "a= " << a << ", b= " << b << ", t= " << t << endl; }
	else cout << "a= " << a << ", b= " << b << ", z= " << z << ", t= " << t << endl;
	system("pause");
	return 0;
}