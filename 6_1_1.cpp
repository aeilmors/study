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

int testFunc(int n)
{
	static int count;
	cout << n << endl;
	cout << count << endl;
	++count;

	return count;
}

int main()
{
	int input;
	while(cin >> input) {
		testFunc(input);
	}

	return 0;
}