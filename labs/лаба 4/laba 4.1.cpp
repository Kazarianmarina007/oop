#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Child {
private:
	string ima;
	string fam;
	int voz;
public:int some;
	   Child(string n, string f, int a) {
		   this->voz = a;
		   this->ima = n;
		   this->fam = f;
	   };
	void p() {
		cout << " ��� " << ima << " ������� " << fam << " ������� " << voz << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Child c1((string)"�������", (string)"�������", 18);
	Child c2((string)"��������",(string)"��������",18);
	c1.p();
	c2.p();
	system("pause");
	return 0;

}
