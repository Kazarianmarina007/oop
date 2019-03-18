#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int *in(int *mas);//инвертирование
int *neub(int *mas);//сортировка по неубыванию
int *nevoz(int *mas);//сортировка по невозрастанию
int *(*un(int *mas))(int *);//универсальная функция, возвращающая указатель на функцию

int main()
{	
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int *mas=new int[10];//выделение динамической памяти под массив
	int res;
	int *(*f)(int[]);//создание указателя на функцию
	cout << "ishodhiy massiv: " << endl;
	for (int i = 0; i < 10; i++) {
		mas[i]= rand() % 20-10;//заполнение рандомными числами
		cout << mas[i] << ' ';//вывод на экран
	}
	cout << endl;
	f = un(mas);
	mas = f(mas);
	for (int i = 0; i < 10; i++) {
		cout << mas[i] << " ";
	}
	f = NULL;
	mas = NULL;
	system("pause");
	return 0;

}
int *in(int *mas) {//инвертирование
	for (int i = 0; i <= 4; i++) {
		swap(mas[i], mas[i + 5]);
	}
	return mas;
};
int *neub(int *mas) {//сортировка по неубыванию
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (mas[j] > mas[j + 1]) {
				swap(mas[j], mas[j + 1]);
			}
		}
	}
	return mas;
};
int *nevoz(int *mas) {//сортировка по невозрастанию
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (mas[j] < mas[j + 1]) {
				swap(mas[j], mas[j + 1]);
			}
		}
	}
	return mas;
};
int *(*un(int *mas))(int *) {//универсальная функция,возвращающая указатель на функцию 
	int p=mas[0], sum=0;
	for (int i = 0; i < 10; i++) {
		sum = sum + mas[i];
	}
	cout << "pervoe chislo " << p << " summa vseh elementov " << sum << endl;
	if (p == sum) { return in; }
	else if (p > sum) { return neub; }
	else { return nevoz; }
}