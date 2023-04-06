/** \file mean.c
	\brief computing the mean value of integers and complex integers
	\author Alessandro Demarchi

*/

#include "mean.h"
float mean(int a, int b) {
	return(float)(a + b) / (float)2;
}

complexfloat complex_mean(complexint a, complexint b) {
	complexfloat result;
	result.re = mean(a.re,b.re);
	result.im = mean(a.im,b.im);
	return result;
}