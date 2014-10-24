/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <cstring>
//#include <vector>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <new>
//#include <type_info>

using namespace::std;

void Swap(int *p1, int *p2);

int main()
{
	int hello, world;

	cin >> hello >> world;
	Swap(&hello, &world);
	cout << hello << ' ' << world << endl;

	return 0;
}

void Swap(int *p1, int *p2)
{
	int temp(0);
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}