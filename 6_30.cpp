/***************************************
 Author : jt;
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
#include <string>
#include <vector>
//#include <initializer_list>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <cctype>
//#include <new>
//#include <type_info>

using namespace::std;

bool StrSubstring(const string &str1, const string &str2);
int &get(int *array, int index)
{
	return array[index];
}

void RecurtionPrintVector(const vector<string> &strs, const vector<string>::iterator &cur);
int Factorial(int val);

int main()
{
	int ia[10];
	vector<string> strs = {"C", "C++", "Python", "Php", "Java"};

	// for (int i = 0; i != 10; ++i) {
	// 	get(ia, i) = i;
	// }
	// for (auto elem : ia) {
	// 	cout << elem << endl;
	// }

	// RecurtionPrintVector(strs, strs.begin());

	for (int i = 0; i != 10; ++i) {
		cout <<Factorial(i) << endl;
	}
	

	return 0;
}

bool StrSubstring(const string &str1, const string &str2)
{
	if (str1.size() == str2.size()) {
		return str1 == str2;
	}

	auto size = str1.size() < str2.size() ? str1.size() : str2.size();

	for (decltype(size) i = 0; i != size; ++i) {
		if (str1[i] != str2[i]) {
			return false;
		}
	}
	//#error, Should have a return value or expression here;
}

void RecurtionPrintVector(const vector<string> &strs, const vector<string>::iterator &cur)
{
	if (cur != strs.end()) {
		cout << *cur << endl;
		RecurtionPrintVector(strs, cur + 1);
	} else {
		return ;
	}
}

int Factorial(int val)
{
	if (val != 0) {
		return Factorial(val - 1) * val;
	}

	return 1;
}