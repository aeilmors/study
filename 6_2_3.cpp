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
//#include <new>
//#include <type_info>

using namespace::std;

bool HasUpCharacter(const string &s);
void ToLower(string &s);

int main()
{
	string str;
	cin >> str;

	cout << HasUpCharacter(str) << endl;
	// cout << ToLower(str) << endl;
	ToLower(str);
	cout << str << endl;
	cout << HasUpCharacter(str) << endl;

	return 0;
}

bool HasUpCharacter(const string &s)
{
	for (auto ch : s) {
		if (ch >= 'A' && ch <= 'Z')
			return true;
	}
	return false;
}

void ToLower(string &s)
{
	for (auto &ch : s) {
		ch = tolower(ch);
	}
}