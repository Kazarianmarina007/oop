#include "pch.h"
#include "Complex.h"

void print_menu() {
	cout << '\t' << "deistvia nad kompleksnimi chislami" << endl;
	cout << "1) slojenie" << endl;
	cout << "2) vychitanie" << endl;
	cout << "3) umnojenie" << endl;
	cout << "4) delenie" << endl;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Co res;
	Co a, b;
	int answer;
	
		print_menu();
		cin >> answer;
		switch (answer)
		{
		case 1:

			cout << "vvedite deistvitelnuu i mnimuu chast pervogo kompleksnogo chisla: ";
			cin >> a.re >> a.im;
			cout << "vvedite deistvitelnuu i mnimuu chast vtorogo kompleksnogo chisla: ";
			cin >> b.re >> b.im;
			res = sum(a, b);
			cout << "Resulat: " << '\t' << res.re << " + i" << res.im << endl;
			break;
		case 2:

			cout << "vvedite deistvitelnuu i mnimuu chast pervogo kompleksnogo chisla: ";
			cin >> a.re >> a.im;
			cout << "vvedite deistvitelnuu i mnimuu chast vtorogo kompleksnogo chisla:";
			cin >> b.re >> b.im;
			res = raz(a, b);
			cout << "Resulat: " << '\t' << res.re << " + i" << res.im << endl;
			break;
		case 3:

			cout << "vvedite deistvitelnuu i mnimuu chast pervogo kompleksnogo chisla: ";
			cin >> a.re >> a.im;
			cout << "vvedite deistvitelnuu i mnimuu chast vtorogo kompleksnogo chisla:";
			cin >> b.re >> b.im;
			res = umn(a, b);
			cout << "Resulat: " << '\t' << res.re << " + i" << res.im << endl;
			break;
		case 4:

			cout << "vvedite deistvitelnuu i mnimuu chast pervogo kompleksnogo chisla: ";
			cin >> a.re >> a.im;
			cout << "vvedite deistvitelnuu i mnimuu chast vtorogo kompleksnogo chisla: ";
			cin >> b.re >> b.im;
			res = del(a, b);
			cout << "Resulat:" << '\t' << res.re << " + i" << res.im << endl;
			break;
		}
	system("pause");
	return 0;
}