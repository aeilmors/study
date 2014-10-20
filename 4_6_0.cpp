/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
#include <cstring>
#include <vector>
//#include <cstddef>

using namespace::std;

int main()
{
	std::vector<string> vs = {"sfjssdads", "sdfnjgevvfnbjg", "uhgerugedvnrb", "fuugtjvdf"};
	// std::vector<string>::iterator iter = vs.begin();
	// auto iter = vs.begin();
	decltype(vs.begin()) iter = vs.begin();

	// cout << (*iter).empty() << endl;
	cout << iter -> empty() << endl;
	cout << *iter << endl;
	cout << *iter++ << endl;
	cout << *iter << endl;
	// cout << ++*iter << endl;	///home/jt/code/study/4_6_0.cpp:25:10: error: no match for ‘operator++’ (operand type is ‘std::basic_string<char>’)cout << ++*iter << endl;
	cout << iter++ -> empty() << endl;

	return 0;
} 