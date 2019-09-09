#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
	float re;
	float im;
public:
	void s_a(float a) {
		this->re = a;
	};
	void s_b(float b) {
		this->im = b;
	};
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
	Complex c1, c2;
	c1.s_a(-10);
	c2.s_a(-20);
	c1.s_b(20);
	c2.s_b(90);
	c1.pr();
	c2.pr();
	system("pause");
	return 0;
}