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
	// std::vector<int> test;

	// for (int i = 0; i < 5; ++i)
	// 	test.push_back(i);

	// for (const auto &item : test)
	// 	cout << item << endl;

	// for (auto &item : test) {
	// 	item % 2 ? (item *= 2) : true;
	// }

	// for (const auto &item : test)
	// 	cout << item << endl;

	// int grade;
	// string final_grade;

	// cin >> grade;

	// final_grade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail";

	// cout << final_grade << endl;

	// if (grade > 90)
	// 	final_grade = "high pass";
	// else if (grade > 75)
	// 	final_grade = "pass";
	// else if (grade > 60)
	// 	final_grade = "low pass";
	// else 
	// 	final_grade = "fail";

	// cout << final_grade << endl;

	string s = "word";
	string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

	cout << pl << endl;

	return 0;
} 