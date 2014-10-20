#include <iostream>
#include <cstring>
#include <vector>

using namespace::std;

int main()
{
	int iarr[] = {1, 2, 3, 4, 5, 6};
	std::vector<int> v1(begin(iarr), end(iarr));
	int iarr1[6];

	// for (auto i : v1) {
	// 	cout << i << endl;
	// }

	// for (int index = 0; index != 6; ++index) {
	// 	iarr1[index] = v1[index];
	// }

	auto it1 = begin(iarr1);
	for (auto it2 = v1.begin(); it1 != end(iarr1) && it2 != v1.end(); ++it1, ++it2) {
		*it1 = *it2;
	}

	for (auto item : iarr1) {
		cout << item << endl;
	}

	return 0;
}