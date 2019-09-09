#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
	float x;
	float y;
public:
	void sch(float a, float b) {
		this->x = a;
		this->y = b;
	}
	float mod() {
		return sqrt(x*x + y * y);
	};

	void pl(Vector b) {
		x += b.x;
		y += b.y;
	};

	void mi(Vector b) {
		x -= b.x;
		y -= b.y;
	};
	void pr() {
		cout << x << " " << y << endl;
	}
};

int main()
{
	Vector v1,v2;
	v1.sch(13,12);
	v2.sch(20, 11);
	v1.pl(v2);
	v1.pr();
	system("pause");
	return 0;
}