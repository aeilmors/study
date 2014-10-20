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
	// unsigned char sample = 0161;
	// char ch;
	// ch = ~sample << 6;

	// // cout << ch << endl;
	// cout << (~sample << 6) << endl;


	unsigned long ul1 = 3, ul2 = 7;

	cout << (ul1 & ul2) << endl;
	cout << (ul1 | ul2) << endl;
	cout << (ul1 && ul2) << endl;
	cout << (ul1 || ul2) << endl;

	return 0;
} 