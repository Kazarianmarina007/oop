#include "pch.h"
#include <iostream>
using namespace std;

class ekran {//�����
protected:
	bool touch;//����������� ���������� ����������
	int di;//���������
};
class klava{ //����������
protected:
	bool podsv;//������� ���������
	bool dop_k;//������� ��� ����� ������
};
class nout :public ekran,public klava {//�������
public:
	string marka;
	nout(string m, bool t,int d,bool p,bool k) {
		marka = m;
		touch = t;
		di = d;
		podsv=p;
		dop_k = k;
	}
};
class komp :public ekran, public klava {//������������ ���������
public:
	string marka;
	komp(string m,  int d, bool p) {
		marka = m;
		touch = false;
		di = d;
		podsv = p;
		dop_k = true;
	}
};
class tel :public ekran, public klava {//�������
public:
	string marka;
	tel(string m, bool t, int d, bool p,bool k) {
		marka = m;
		touch = t;
		di = d;
		if (t) {
			podsv = p;
			dop_k = k;
		}
		else {
			podsv = NULL;
			dop_k = NULL;
		}
	}
};