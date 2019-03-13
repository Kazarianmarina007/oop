#include "pch.h"
#include "Complex.h"

void print_menu() {
	cout << '\t' << "Действия над комплексными числами" << endl;
	cout << "1) Сложение" << endl;
	cout << "2) Вычитание" << endl;
	cout << "3) Умножение" << endl;
	cout << "4) Деление" << endl;
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

			cout << "Введите действительную и мнимую часть первого комплексного числа: ";
			cin >> a.re >> a.im;
			cout << "Введите действительную и мнимую часть второго комплексного числа: ";
			cin >> b.re >> b.im;
			res = sum(a, b);
			cout << "Результат: " << '\t' << res.re << " + i" << res.im << endl;
			break;
		case 2:

			cout << "Введите действительную и мнимую часть первого комплексного числа: ";
			cin >> a.re >> a.im;
			cout << "Введите действительную и мнимую часть второго комплексного числа: ";
			cin >> b.re >> b.im;
			res = raz(a, b);
			cout << "Результат: " << '\t' << res.re << " + i" << res.im << endl;
			break;
		case 3:

			cout << "Введите действительную и мнимую часть первого комплексного числа: ";
			cin >> a.re >> a.im;
			cout << "Введите действительную и мнимую часть второго комплексного числа: ";
			cin >> b.re >> b.im;
			res = umn(a, b);
			cout << "Результат: " << '\t' << res.re << " + i" << res.im << endl;
			break;
		case 4:

			cout << "Введите действительную и мнимую часть первого комплексного числа: ";
			cin >> a.re >> a.im;
			cout << "Введите действительную и мнимую часть второго комплексного числа: ";
			cin >> b.re >> b.im;
			res = del(a, b);
			cout << "Результат: " << '\t' << res.re << " + i" << res.im << endl;
			break;
		}
	system("pause");
	return 0;
}