#include "pch.h"
#ifndef CO_H
#define CO_H
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

class Co {
public:
	float re;
	float im;
};

Co sum(Co a, Co b);// �����
Co raz(Co a, Co b);// �������� 
Co umn(Co a, Co b);// ������������
Co del(Co a, Co b);// ������� 
float abs(Co a);//������ ������������ �����

#endif 

