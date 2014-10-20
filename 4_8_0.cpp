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
	unsigned char bits = 0233;

	// cout << sizeof bits << endl;
	// cout << (int)bits << endl;
	bits = ~bits;	//~bits(unsigned char) will become type int -156 rather than unsigned int
	cout << bits << endl;
	cout << (int)'d' << endl;

	return 0;
} 