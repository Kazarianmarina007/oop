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
	cout << "enter the number of rows of the array ";
	int kolstr;
	cin >> kolstr;
	cout << endl << "enter the number of colomns of the array ";
	int kolstolb;
	cin >> kolstolb;
	cout << endl;
	int **mat = new int *[kolstr];
	for (int i = 0; i < kolstr; i++) {
		mat[i] = new int[kolstolb];
	}
	mat=zap( kolstr, kolstolb,mat);//zapolniaem massiv
	vyv( mat, kolstr, kolstolb);//vyvodim
	mat=udal(mat,kolstr,kolstolb);//udaliaem pamat, vydelennuu ranee dlia massiva
	delete mat[];
	cout << endl;
	system("pause");
	return 0;
}