#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
	float re;
	float im;
public:
	void sch(float re, float im) {
		this->re = re;
		this->im = im;
	}
	float mod() {
		return sqrt(re*re + im * im);
	};
	float arg() {
		float t,m;
		m = sqrt(re*re + im * im);
		t = atan(im / re);
		return t;
	}

	void pr() {
		cout <<" modul "<< this->mod() << " argument " << this-> arg() << endl;
	}
};

int main()
{
	Complex c1,c2;
	c1.sch(-10, 20);
	c1.pr();
	system("pause");
	return 0;
}