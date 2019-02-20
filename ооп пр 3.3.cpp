#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

struct avtomob {
	int god_vypuska;
	int kol_pass;
	string nomernoi_znak;
	string marka;
	string cvet;
	int kol_dverei;
};
int main() {
	setlocale(LC_ALL, "Russian");
	avtomob a1 = { 1992,2,(string)"gavai",(string)"petushok",(string)"joltii",2
	};
	avtomob a2 = { 1909,4,(string)"new Y",(string)"koban",(string)"rozovii",5
	};
	system("pause");
	return 0;
}