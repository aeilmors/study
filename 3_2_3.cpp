#include <iostream>
#include <cstring> 

using namespace std;

int main()
{
	string s1("sdjfsdja, sfjodsajfo!!!");
	string s2;
	const string cs("Keep out!");

	// cin >> s1;
	// for (auto &c : s1) {
	// 	c = 'X';
	// }

	// for (decltype(s1.size()) index = 0; index != s1.size(); ++index) {
	// 	s1[index] = 'X';
	// }

	// decltype(s1.size()) index = 0;
	// while (index != s1.size()) {
	// 	s1[index] = 'X';
	// 	++index;
	// }
	// cout << s1 << endl;

	// cin >> s2[0];
	// cout << s2[0] << endl;

	// for (decltype(s1.size()) index = 0; index != s1.size(); ++index) {
	// 	if (!ispunct(s1[index]))
	// 		// cout << s1[index];
	// 		s2 += s1[index];
	// }
	// cout << endl;
	// cout << s2 << endl;

	// for (auto &c : cs) {
	// 	c = 'X';
	// }

	return 0;
}