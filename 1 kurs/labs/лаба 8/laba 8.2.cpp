
#include <iostream>
#include <list>
#include "lab5_1.cpp"

using namespace std;

int main()
{
	list<Complex> ls;
	int kol;
	cout << "kolicestvo compleksnyh chisel: ";
	cin >> kol;
	for (int i = 0; i < kol; i++) {
		Complex nom(0, 0);
		cout << "vvedite copmleksnoe chislo (vvodite cherez probel snachala deystvitelnuu,a potom mnimuu chasti):";
		cin >> nom;
		ls.push_back(nom);
	}
	return 0;
}