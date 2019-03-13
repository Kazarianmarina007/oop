#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int** zap( int kolstr, int kolstolb, int** mat ) {

	for (int i = 0; i < kolstr; i++) {
		for (int j = 0; j < kolstolb; j++) {
			mat[i][j] = rand() % 50 + 10;
		}
	}
	return mat;
}
void vyv(int** uuk, int kolstr, int kolstolb) {
	for (int i = 0; i < kolstr; i++) {
		for (int j = 0; j < kolstolb; j++) {
			cout << uuk[i][j] << " ";
		}
		cout << endl;
	}
}

int** udal(int** mat,int kolstr,int kolstolb) {
	for (int i = 0; i < kolstr; i++) {
		delete mat[ i];
	}
	return mat;
}
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "������� ���-�� ����� ������� ";
	int kolstr;
	cin >> kolstr;
	cout << endl << "������� ���-�� �������� ������� ";
	int kolstolb;
	cin >> kolstolb;
	cout << endl;
	int **mat = new int *[kolstr];
	for (int i = 0; i < kolstr; i++) {
		mat[i] = new int[kolstolb];
	}
	mat=zap( kolstr, kolstolb,mat);//��������� ������
	vyv( mat, kolstr, kolstolb);//�������
	mat=udal(mat,kolstr,kolstolb);//������� ������, ���������� ����� ��� ������� 
	delete mat[];
	cout << endl;
	system("pause");
	return 0;
}