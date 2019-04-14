#include <iostream>
#include <string>
using namespace std;

const int kol = 5;

class Student {
public:
	string name;
	string family;
	string group;
	int age;
	int notes[kol];
	Student(string n, string f, string g, int a, int * zam) {
		name = n;
		family = f;
		group = g;
		age = a;
		for (int i = 0; i < kol; i++) {
			notes[i] = zam[i];
		}
	};
};

class Headman : public Student {
public:
	int dengi;
	string mail;
	Headman(string name, string family, string group, int age, int * notes, int d, string m) : Student(name, family, group, age, notes) {
		dengi = d;
		mail = m;
	};
	void izmenenie(Student& stud, int * notes) {
		if (this->group == stud.group) {
			for (int i = 0; i <kol; i++) {
				stud.notes[i] = notes[i];
			}
		}
		else {
			cout << "starosta ne mojet menat ocenki drugoy gruppy << endl;
		}
	}
};