#include "pch.h"
#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Car {
public:
	string mark;
	string number; 
	string color; 
	Car(string m, string n, string c) {
		mark = m;
		number = n;
		color = c;
	}
};

int main()
{
	queue<Car> q;
	const int chasi = 5; 
	for (int chas = 1; chas <= chasi; chas++) {
		int kol;
		cout << "hour " << chas << endl;
		int razm = q.size();
		if (!razm) {
			cout << "no cars in queue" << endl;
		}
		else {
			if (razm / 5) {
				for (int i = 0; i < 5; i++) {
					Car c1 = q.front();
					cout << "The following car was washed>> " << c1.mark << ' ' << c1.number << ' ' << c1.color << endl;
					q.pop();
				}
				cout << "5 cars were washed ( " << q.size() << " left)" << endl;
			}
			else {
				for (int i = 0; i < (razm % 5); i++) {
					Car c1 = q.front();
					cout << "The following car was washed>> "<< c1.mark << ' ' << c1.number << ' ' << c1.color << endl;
					q.pop();
				}
				cout << "were washed " << razm % 3 << "cars. no cars in queque" << endl;
			}

		}
		cout << "how many new cars are in queue ";
		cin >> kol;
		for (int i = 0; i < kol; i++) {
			string mark, number, color;
			cout << "Mark: ";
			cin >> mark;
			cout << "number: ";
			cin >> number;
			cout <<"color: ";
			cin >> color;
			Car c1(mark, number, color);
			q.push(c1);
		}
	}
	int razm = q.size();
	if (razm > 5) {
		cout << "ooooops,we didn't make it" << endl;
	}
	else {
		cout << "we are lucky, no angry visitor today " << endl;
	}
	return 0;
}