#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class fun {
public:
	virtual void print() = 0;
	virtual float res(float x) = 0;
	virtual void pr() = 0;
	virtual fun* copy() = 0;
};
class kon :public fun {
public :
	void print() {
		cout << "f(x)=67" << endl;
	}
	float res(float x) override {
		return 67;
	}
	void pr() {
		cout << "f'(const)=0" << endl;
	}
	fun* copy() override {
		fun* f = new kon;
		return f;
	}
};
class per :public fun {
public:
	void print() {
		cout << "f(x)=x" << endl;
	}
	float res(float x) override {
		return x;
	}
	void pr() {
		cout << "f'(x)=1" << endl;
	}
	fun* copy() override {
		fun* f = new per;
		return f;
	}
};
class sum :public fun {
public:
	void print() {
		cout << "f(x)=x+x" << endl;
	}
	float res(float x) override {
		return x+x;
	}
	void pr() {
		cout << "f'(x)=2" << endl;
	}
	fun* copy() override {
		fun* f = new sum;
		return f;
	}
};
class rasn :public fun {
public:
	void print() {
		cout << "f(x)=45x-24" << endl;
	}
	float res(float x) override {
		return 45*x-24;
	}
	void pr() {
		cout << "f'(x)=45" << endl;
	}
	fun* copy() override {
		fun* f = new rasn;
		return f;
	}
};
class proisv :public fun {
public:
	void print() {
		cout << "f(x)=x*3x" << endl;
	}
	float res(float x) override {
		return x*3*x;
	}
	void pr() {
		cout << "f'(x)=6x" << endl;
	}
	fun* copy() override {
		fun* f = new proisv;
		return f;
	}
};
class cha :public fun {
public:
	void print() {
		cout << "f(x)=24x^2/2" << endl;
	}
	float res(float x) override {
		return 24*x*x/(2);
	}
	void pr() {
		cout << "f'(x)=24x" << endl;
	}
	fun* copy() override {
		fun* f = new cha;
		return f;
	}
};
class sinus :public fun {
public:
	void print() {
		cout << "f(x)=sin(x)" << endl;
	}
	float res(float x) override {
		return sin(x);
	}
	void pr() {
		cout << "f'(x)=cos(x)" << endl;
	}
	fun* copy() override {
		fun* f = new sinus;
		return f;
	}
};
class cosin :public fun {
public:
	void print() {
		cout << "f(x)=cos(x)" << endl;
	}
	float res(float x) override {
		return cos(x);
	}
	void pr() {
		cout << "f'(x)=-sin(x)" << endl;
	}
	fun* copy() override {
		fun* f = new cosin;
		return f;
	}
};
class expo :public fun {
public:
	void print() {
		cout << "f(x)=exp(x)" << endl;
	}
	float res(float x) override {
		return exp(x);
	}
	void pr() {
		cout << "f'(x)=exp(x)" << endl;
	}
	fun* copy() override {
		fun* f = new expo;
		return f;
	}
};
class loga :public fun {
public:
	void print() {
		cout << "f(x)=ln(x)" << endl;
	}
	float res(float x) override {
		return log(x);
	}
	void pr() {
		cout << "f'(x)=0" << endl;
	}
	fun* copy() override {
		fun* f = new loga;
		return f;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	return 0;
}