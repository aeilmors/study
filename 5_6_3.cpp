/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <cstring>
//#include <vector>
//#include <cstddef>
//#include <exception>
#include <stdexcept>
//#include <new>
//#include <type_info>

using namespace::std;

int main()
{
	int i1, i2;

	while (true) {
		try {
			cin >> i1 >> i2;
			if (i2 == 0)
				throw(runtime_error("Divisor cannot be 0!"));
			cout << static_cast<double>(i1) / i2 << endl;
			break;
		} catch (runtime_error err) {
			cout << err.what() << "\nTry again? Enter y or n" << endl;
			char choice;
			cin >> choice;
			if (!cin || choice == 'n')
				break;
		}
	}
	
	return 0;
}