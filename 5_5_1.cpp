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
	string item1, item2;
	bool is_repeat = false;

	while (cin >> item1)
	{
		if (item2 == item1)
		{
			is_repeat = true;
			cout << item1 << endl;
			break;
		} else
		{
			item2 = item1;
		}
	}

	if (!is_repeat)
	{
		cout << "There is no word repeated." << endl;
	}

	return 0;
} 