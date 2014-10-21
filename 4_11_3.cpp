/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
#include <cstring>
//#include <vector>
//#include <cstddef>

using namespace::std;

int main()
{
	int i;
	double d;
	const string *ps;
	char *pc;
	void *pv;

	// pv = (void *)ps;
	pv = static_cast<void *>(const_cast<string *>(ps));
	// i = int(*pc);
	i = static_cast<int>(*pc);
	// pv = &d;
	pv = static_cast<void *>(&d);
	// pc = (char *)pv;
	pc = static_cast<char *>(pv);

	return 0;
} 