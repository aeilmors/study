//fact.cc
#include <iostream>
#include "Chapter6.h"

using namespace::std;

unsigned long long Fac(unsigned int n)
{
	if (n == 0 || n == 1)
		return 1;
	else 
		return n * Fac(n-1);
}

// unsigned long long Fac(unsigned int n)
// {
// 	unsigned long long result = 1;

// 	if (n == 0 || n == 1)
// 		return result;
// 	for (unsigned int i = 1; i <= n; ++i) {
// 		result *= i;
// 	}

// 	return result;
// }