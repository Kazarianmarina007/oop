#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
	float re;
	float im;
public:
	Complex(float a, float b) {
		re = a;
		im = b;
	}
	float mod() {
		return sqrt(re*re + im * im);
	};
	float arg() {
		float res;
		if (re > 0) { res = atan(im / re); }
		else if (re == 0) {
			if (re > 0) { res = 3.14 / 2; }
			else { res = 3.14 / 2; }
		}
		else {
			if (im >= 0) { res = 3.14 + atan(im / re); }
			else { res = -3.14 + atan(im / re); }
		}
		return res;
	}

	void pr() {
		cout << " modul " << this->mod() << " argument " << this->arg() << endl;
	}
};

int main()
{
	Complex c1(-10, 20);
	Complex c2(-20, 90);
	c1.pr();
	c2.pr();
	system("pause");
	return 0;
}