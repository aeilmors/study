/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
#include <string>
//#include <vector>
//#include <initializer_list>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <cctype>
//#include <new>
//#include <type_info>

using namespace::std;

// string str[10];

// string (&Func())[10];
// decltype(str) &Func1();
// auto Func2() -> string (&)[10];

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

auto ArrPtr(int i) -> int (&)[5]
{
	return i % 2 ? odd : even;
}

int main()
{
	for (int i = 0; i != 2; ++i) {
		for (auto elem : ArrPtr(i)) {
			cout << elem << endl;
		}
	}

	return 0;
}