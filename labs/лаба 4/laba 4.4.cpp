#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
	float x;
	float y;
public:
	Vector(float a, float b) {
		x = a;
		y = b;
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
	Vector v1(13, 12);
	Vector v2(20, 11);
	v1.pl(v2);
	v1.pr();
	system("pause");
	return 0;
}