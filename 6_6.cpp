/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <string>
//#include <vector>
//#include <initializer_list>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <cctype>
//#include <new>
//#include <type_info>

using namespace::std;

void f();
void f(int);
void f(int, int);
void f(double a, double b = 3.14);
// {
// 	cout << "Two double" << endl;
// }

int main()
{
	// f(2.52, 42);	//ambiguous
	// f(42);		//one int param
	// f(42, 0);	//two int
	// f(2.56, 3.14);	//two double


	return 0;
}

void f()
{
	cout << "No param" << endl;
}

void f(int a)
{
	cout << "One int param" << endl;
}

void f(int a, int b)
{
	cout << "Two int" << endl;
}

void f(double a, double b)
{
	cout << "Two double" << endl;
}