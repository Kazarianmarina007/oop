#include "pch.h"
#include <iostream>
using namespace std;

class T_S {//������������ ��������
public:
	bool prava;//������������� ����
	int kol_k;//���-�� �����
	int kol_p;//���-�� ����������
};
class ab :public T_S {//�������
public:
	ab() { 
		prava = true;
		kol_k = 8;
		kol_p = 30;
	}
};
class am :public T_S {//����������
public:
	am() {
		prava = true;
		kol_k = 4;
		kol_p = 3;
	}
};

class vel :public T_S {//�����
public:
	vel() {
		prava = false;
		kol_k = 2;
		kol_p = 0;
	}
};
