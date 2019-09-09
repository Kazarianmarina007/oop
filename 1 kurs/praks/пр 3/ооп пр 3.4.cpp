#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

struct tochki {
	int x;
	int y;
};
struct vektor {
	tochki t1;
	tochki t2;
};
int main() {
	setlocale(LC_ALL, "Russian");
	vektor v1{
		{2,3},{3,9}
	};
	system("pause");
	return 0;
}
