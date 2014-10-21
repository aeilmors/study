/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <cstring>
#include <vector>
//#include <cstddef>

using namespace::std;

int main()
{
	const vector<string> Grade_Level{"F", "D", "C", "B", "A", "A++"};
	int scores;
	string letter_score;

	cout << "scores" << '\t' << "Grade_Level" << endl;
	while (cin >> scores && scores >= 0 && scores <= 100)
	{
		// if (scores < 60)
		// {
		// 	letter_score = Grade_Level[0];
		// } else
		// {
		// 	letter_score = Grade_Level[(scores - 50) / 10];
		// 	if (scores != 100)
		// 	{
		// 		if (scores % 10 > 7)
		// 		{
		// 			letter_score += "+";
		// 		}
		// 		if (scores % 10 < 3)
		// 		{
		// 			letter_score += "-";
		// 		}
		// 	}
		// }


		letter_score = scores < 60 ? Grade_Level[0] : Grade_Level[(scores - 50) / 10];
		letter_score += scores != 100 ? ((scores % 10 > 7) ? "+" : ((scores % 10 < 3) ? "-" : "")) : "";
		cout << scores << '\t' << letter_score << endl;
	}

	return 0;
} 