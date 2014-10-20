#include <iostream>

using namespace::std;

int main()
{
	using int_array = int[4];

	// int ia[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	int_array ia[3] = {1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1};
	// for (int (&idx1)[4] : ia)
	// 	for (int item : idx1)
	// 		cout << item << endl;

	// for (size_t idx1 = 0; idx1 != 3; ++idx1)
	// 	for (size_t idx2 = 0; idx2 != 4; ++idx2)
	// 		cout << ia[idx1][idx2] << endl;

	// for (int (*p1)[4] = begin(ia); p1 != end(ia); ++p1)
	// 	for (int *p2 = begin(*p1); p2 != end(*p1); ++p2)
	// 		cout << *p2 << endl;

	for (int_array &iter : ia)
		for (int item : iter)
			cout << item << endl;

	return 0;
}