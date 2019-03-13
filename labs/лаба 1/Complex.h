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

Co sum(Co a, Co b);// сумма
Co raz(Co a, Co b);// разность 
Co umn(Co a, Co b);// произведение
Co del(Co a, Co b);// частное 
float abs(Co a);//модуль комплексного числа

#endif 

