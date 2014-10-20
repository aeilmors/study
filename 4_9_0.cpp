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
	string s1, s2, s3;
	vector<int> iv1(10, 0), iv2(20, 3), iv3{3, 5};

	s1 = "asfjkasjfgnjdfksngjsegefnjgne";
	s2 = "sr";
	s3 = "sjfewjf";

	cout << sizeof s1 << ' ' << sizeof s2 << ' ' << sizeof s3 << endl;
	cout << sizeof iv1 << ' ' << sizeof iv2 << ' ' << sizeof iv3 << endl;

	cout << s1.size() << ' ' << s2.size() << ' ' << s3.size() << endl;
	cout << iv1.size() << ' ' << iv2.size() << ' ' << iv3.size() << endl;

	return 0;
} 