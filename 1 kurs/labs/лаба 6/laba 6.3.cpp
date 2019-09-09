#include <iostream>
#include <string>
#include "laba 6.2.cpp"

using namespace std;

class Dog : public Animal {
private:
	string ima;
public:
	Dog(int v, int r, bool hv,string im) : Animal(v, r, hv) {
		ima = im;
	};

	void zvuk() {
		cout << "rrrr,I want to roar,not to mew" << endl;
	};


};

class Cat : public Animal {
private:
	string ima;
public:
	Cat(int v, int r, bool hv, string im) : Animal(v, r, hv) {
		ima = im;
	};

	void zvuk() {
		cout << "vse taki meow" << endl;
	};
}