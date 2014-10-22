/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <cstring>
//#include <vector>
//#include <cstddef>

using namespace::std;

int main()
{
	char ch;
	unsigned int vowelCnt, aCnt, eCnt, iCnt, oCnt, uCnt, otherCharCnt, tabCnt, spaceCnt, enterCnt, wsCnt;
	unsigned int ffCnt, flCnt, fiCnt;
	bool fFlag;
	vowelCnt = 0;
	aCnt = 0;
	eCnt = 0;
	iCnt = 0;
	oCnt = 0;
	uCnt = 0;
	otherCharCnt = 0;
	tabCnt = 0;
	spaceCnt = 0;
	enterCnt = 0;
	wsCnt = 0;
	ffCnt = 0;
	flCnt = 0;
	fiCnt = 0;
	fFlag = false;

	while (cin >> noskipws >> ch)
	{
		switch (ch)
		{
			case 'a' : case 'A' :
				++aCnt;
				++vowelCnt;
				break;
			case 'e' : case 'E' :
				++eCnt;
				++vowelCnt;
				break;
			case 'i' : 
				if (fFlag) ++fiCnt;
			case 'I' :
				++iCnt;
				++vowelCnt;
				break;
			case 'o' : case 'O' :
				++oCnt;
				++vowelCnt;
				break;
			case 'u' : case 'U' :
				++uCnt;
				++vowelCnt;
				break;
			case '\t' :
				++tabCnt;
				++wsCnt;
				break;
			case ' ' :
				++spaceCnt;
				++wsCnt;
				break;
			case '\n' :
				++enterCnt;
				++wsCnt;
				break;
			case 'f' :
				// // if "ffff" only counts 2 "ff"
				// if (fFlag) 
				// {
				// 	++ffCnt;
				// 	fFlag = false;
				// } else
				// {
				// 	fFlag = true;
				// }

				// if "ffff" counts 3 "ff"
				if (fFlag)
				{
					++ffCnt;
				}
				fFlag = true;
				++otherCharCnt;
				break;
			case 'l' :
				if (fFlag) ++flCnt;
				++otherCharCnt;
				break;
			default :
				++otherCharCnt;
				break;
		}
		if (ch != 'f')
		{
			fFlag = false;
		}
	}

	cout << "A/a count: " << aCnt << endl;
	cout << "E/e count: " << eCnt << endl;
	cout << "I/i count: " << iCnt << endl;
	cout << "O/o count: " << oCnt << endl;
	cout << "U/u count: " << uCnt << endl;
	cout << "Vowel count: " << vowelCnt << endl;
	cout << "Tab count: " << tabCnt << endl;
	cout << "Space count: " << spaceCnt << endl;
	cout << "Enter count: " << enterCnt << endl;
	cout << "White space count: " << wsCnt << endl;
	cout << "Other count: " << otherCharCnt << endl;
	cout << "ff count: " << ffCnt << endl;
	cout << "fl count: " << flCnt << endl;
	cout << "fi count: " << fiCnt << endl;

	return 0;
} 