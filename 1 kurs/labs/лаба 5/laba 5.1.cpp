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
	};

	Complex& operator= (Complex& mass) {
		this->im = mass.im;
		this->re = mass.re;
		return *this;
	};

	Complex& operator++ () {
		this->re += 1;
		this->im += 1;
		return *this;
	};

	Complex& operator-- () {
		this->re -= 1;
		this->im -= 1;
		return *this;
	};

	friend bool operator==(const Complex& lev, const Complex& pr) {
		bool isReal = lev.re == pr.re;
		bool isImage = lev.im == pr.im;
		return isReal && isImage;
	};

	friend ostream& operator<<(ostream &out, const Complex& mass) {
		out << "Complex number: " << mass.re << " + i * " << mass.im << endl;
		return out;
	};

	friend istream& operator>>(istream &in, const Complex &nom) {
		in >> nom.re >> nom.im;
		return in;
	};

	float get_abs() {
		return sqrt(pow(re, 2) + pow(im, 2));
	};

	float getData() {
		cout << "Kompleksnoe chislo " << endl;
		cout << "deistvitelnaia chast: " << re << endl;
		cout << "mnimaia chast: " << im << endl;
		cout << "modul chisla: " << this->get_abs() << endl << endl;
	};
};