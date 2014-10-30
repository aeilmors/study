/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <string>
//#include <vector>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <cctype>
//#include <new>
//#include <type_info>

using namespace::std;

void print(const int ia[10]);

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	print(a);

	return 0;
}

void print(const int ia[10])	//ia[10], the10 may do nothing
{
	for (size_t i = 0; i != 10; ++i) {
		cout << ia[i] << endl;
	}
}