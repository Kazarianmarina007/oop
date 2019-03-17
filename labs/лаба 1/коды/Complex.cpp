#include "pch.h"
#include "Complex.h"


Co sum(Co a, Co b) {
	Co result;
	result.re = a.re + b.re;
	result.im = a.im + b.im;
	return result;
};

Co raz(Co a, Co b) {
	Co result;
	result.re = a.re - b.re;
	result.im = a.im - b.im;
	return result;
}

Co umn(Co a, Co b) {
	Co result;
	result.re = a.re*b.re - a.im*b.im;
	result.im = a.re * b.im + b.re * a.im;
	return result;
};

Co del(Co a, Co b) {
	Co result;
	result.re = (a.re * b.re + a.im * b.im) / (pow(b.re, 2) + pow(b.im, 2));
	result.im = (b.re * a.im - a.re * b.im) / (pow(b.re, 2) + pow(b.im, 2));
	return result;
}

float abs(Co a) {
	return sqrt(pow(a.re, 2) + pow(a.im, 2));
}