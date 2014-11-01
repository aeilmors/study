/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <string>
#include <vector>
//#include <initializer_list>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <cctype>
//#include <new>
//#include <type_info>
//#include <cassert>

using namespace::std;

int Add(int, int);
int Minus(int, int);
int Multi(int, int);
int Divide(int, int);

vector<int (*)(int, int)>v1{Add, Minus, Multi, Divide};

int main()
{
	for (auto func : v1) {
		cout << func(10, 2) << endl;
	}

	return 0;
}

int Add(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

int Multi(int a, int b)
{
	return a * b;
}

int Divide(int a, int b)
{
	if (!b) {
		cout << "Wrong" << endl;
		return 65536;
	} else {
		return a / b;
	}
}