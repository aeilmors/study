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
	vector<string> words;
	string elem, repeatMostString;
	unsigned maxRepeatCnt = 1, repeatCnt = 1;

	while (cin >> elem)
	{
		if (!words.empty())
		{
			if (elem == *--words.end())
			{
				++repeatCnt;
				if (maxRepeatCnt < repeatCnt)
				{
					maxRepeatCnt = repeatCnt;
					repeatMostString = elem;
				} else if (maxRepeatCnt == repeatCnt)
				{
					repeatMostString = repeatMostString + " and " + elem;
				}
			} else
			{
				repeatCnt = 1;
			}
		}
		words.push_back(elem);
	}

	if (maxRepeatCnt == 1)
	{
		cout << "There is no word repeated continuously." << endl;
	} else
	{
		cout << "The word(s) " << "\"" << repeatMostString << "\"" << " repeat(s) " << maxRepeatCnt << " times continuously." << endl;
	}

	return 0;
} 