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

// double square(double x) {return x * x;}		//{} cannot be ignored
unsigned long long fac(unsigned int value);
unsigned int AbsoluteValue(int number);

int main()
{
	unsigned int value;
	int number;

	cin >> value >> number;
	cout << value << "! = " << fac(value) << endl;
	cout << number << "'s absolute value is " << AbsoluteValue(number) << endl;
	// cout << sizeof(long long) << endl;

	return 0;
}

unsigned long long fac(unsigned int value)
{
	unsigned long long result = value;

	while (value > 1) {
		result *= --value;
	}

	return result;
}

unsigned int AbsoluteValue(int number)
{
	return number > 0 ? number : -number;
}