/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
#include <string>
//#include <vector>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <cctype>
//#include <new>
//#include <type_info>

using namespace::std;

int main(int argc, char *argv[])
{
	string str;

	for (size_t index = 1; index != argc; ++index) {
		str += argv[index];
	}

	// for (auto &s : argv) {
	// 	str += s;
	// }

	cout << str << endl;

	return 0;
}