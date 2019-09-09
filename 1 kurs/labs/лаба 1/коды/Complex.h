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

Co sum(Co a, Co b);// summa
Co raz(Co a, Co b);// raznost
Co umn(Co a, Co b);// proizvedenie
Co del(Co a, Co b);// chastnoe
float abs(Co a);//modul kopleksnogo hisla

#endif 

