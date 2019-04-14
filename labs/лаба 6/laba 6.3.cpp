#include "pch.h"
#include "laba 6.2.cpp"
#include <iostream>
using namespace std;


class Dog : public Animal {
private:
	string favourite_food;
	int ves;
public:
	Dog( int v, int r, bool hv, int ve) : Animal( v, r,hv) {
		favourite_food = "kosti";
		ves = ve;
	};

	void make_sound() {
		cout << "Woof" << endl;
	};


};

class Cat : public Animal {
private:
	string favourite_food;
	int ves;
public:
	Cat( int v, int r, bool hv, int ve) : Animal( v, r, hv) {
		favourite_food = "rybki";
		ves = ve;
	};

	void make_sound() {
		cout << "meow" << endl;
	};
}


