#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	string brand;
	int size_h;
	int size_w;
	int price;
	void getData() {
		cout << "бренд " <<brand<<" длина "<<size_h<<" ширина "<<size_w<<" цена "<<price<< endl;
	};
};

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	Tiles t1, t2;
	t1.brand = "напольный";
	t1.size_h = 15;
	t1.size_w = 11;
	t1.price = 550;
	t2.brand = "настенный";
	t2.size_h = 55;
	t2.size_w = 45;
	t2.price = 9650;
	t1.getData();
	t2.getData();
	return 0;
}
