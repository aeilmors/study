/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <string>
//#include <vector>
#include <initializer_list>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <cctype>
//#include <new>
//#include <type_info>

using namespace::std;

int sum(initializer_list<int> list);

int main()
{
	cout << sum({1, 2, 3, 4, 5, 6, 7, 8, 9}) << endl;

	return 0;
}

int sum(initializer_list<int> list)
{
	int result = 0;

	for (auto elem : list) {
		result += elem;
	}

	return result;
}