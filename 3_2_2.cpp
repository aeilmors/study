#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	// string s1;
	// string s2;
	string test("Hello world!!!");
	// string::size_type size1, size2;

	// while (getline(cin, s1))
	// 	cout << s1 << endl;

	// while (cin >> s1)
	// 	cout << s1 << endl;

	// cin >> s1 >> s2;
	// if (s1 == s2)
	// 	cout << s1 + " = " + s2 << endl;
	// else {
	// 	cout << (s1 > s2 ? s1 : s2) << endl;
	// }
	// size1 = s1.size();
	// size2 = s2.size();
	// if (size1 == size2)
	// 	cout << s1 + " and " + s2 + " has the same length" << endl;
	// else {
	// 	cout << (size1 > size2 ? s1 : s2) << endl;
	// }

	// cout << s1 + s2 << endl;

	for (auto &c : test)  {
		c = toupper(c);
		cout << c << endl;
	}

	cout << test << endl;

	return 0;
}