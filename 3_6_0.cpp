#include <iostream>

using namespace::std;

int main()
{
	int iarr[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	for (decltype(iarr[0]) &row : iarr)
		for (decltype(iarr[0][1]) &col : row) {
			col += 1;
			cout << col << endl;
		}
			// cout << col << endl;
	for (auto irow = iarr; irow != iarr + 3; ++irow)
		for (auto icol = *irow; icol != *irow + 4; ++icol) {
			*icol *= 2;
			cout << *icol << endl;
		}

	return 0;
}