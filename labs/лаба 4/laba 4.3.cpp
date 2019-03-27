#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
	float re;
	float im;
public:
	Complex (float re, float im) {
		re = re;
		im = im;
	}
	float mod() {
		return sqrt(re*re + im * im);
	};
	float arg() {
		float t, m;
		m = sqrt(re*re + im * im);
		t = atan(im / re);
		return t;
	}

	void pr() {
		cout << " modul " << this->mod() << " argument " << this->arg() << endl;
	}
};

int main()
{
	Complex c1(-10,20), c2(-2,90);
	c1.pr();
	c2.pr();
	system("pause");
	return 0;
}s