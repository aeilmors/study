/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <cstring>
//#include <vector>
//#include <cstddef>

using namespace::std;

int main()
{
	// cout << sizeof(char) << ' ' << sizeof(unsigned char) << ' ' << sizeof(int) << ' '
	// 	<< sizeof(long) << ' ' << sizeof(long long) << ' ' << sizeof(float) << ' ' 
	// 	<< sizeof(double) << ' ' << sizeof(long double) << ' ' << sizeof(bool) << 
	// 	' ' << sizeof(wchar_t) << ' ' << sizeof(char16_t) << ' ' << sizeof(char32_t) 
	// 	<< ' ' << sizeof(short) << endl;


	int x[10];
	int *p = x;

	cout << sizeof x / sizeof *x << endl;
	cout << sizeof p / sizeof *p << endl;

	return 0;
} 