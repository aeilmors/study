/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
#include "SalesData.h"
//#include <string>
//#include <vector>
//#include <initializer_list>
//#include <cstddef>
//#include <exception>
//#include <stdexcept>
//#include <cctype>
//#include <new>
//#include <type_info>
//#include <cassert>

using namespace std;

int main()
{
	SalesData total;

	if (read(cin, total)) {
		SalesData trans;
		while (read(cin, trans)) {
			if (total.Isbn() == trans.Isbn()) {
				total.Combine(trans);
			} else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	} else {
		cerr << "No data ?!" << endl;
	}

	return 0;
}