#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Child {
private:
	string ima;
	string fam;
	int voz;
public:
	void b_ima(string ima){
		this->ima = ima;
	}
	void b_fam(string fam) {
		this->fam = fam;
	}
	void b_voz(int voz) {
		this->voz = voz;
	}
	void p() {
		cout << " имя " << ima << " фамилия " << fam << " возраст " << voz << endl;
	}
};

int main()
{	
	setlocale(LC_ALL, "Russian");
	Child c1, c2;
	c1.b_ima((string)"Маринка");
	c1.b_fam((string)"Казарян");
	c1.b_voz(18);
	c2.b_ima((string)"Светочка");
	c2.b_fam((string)"Ефремова");
	c2.b_voz(18);
	c1.p();
	c2.p();
	system("pause");
	return 0;

}
