
#include <iostream>
#include <list>
#include "lab5_1.cpp"

using namespace std;

int main()
{
	list<Complex> ls;
	int count;
	cout << "kolicestvo compleksnyh chisel: ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		Complex input_number(0, 0);
		cout << "vvedite copmleksnoe chislo (vvodite cherez probel snachala deystvitelnuu,a potom mnimuu chasti):";
		cin >> input_number;
		ls.push_back(input_number);
	}
	return 0;
}