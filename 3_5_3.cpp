#include <iostream>
#include <vector>

using namespace::std;

int main()
{
	int ia[] = {1, 2, 4, 6, 10, 8};
	int *p1, *p2;

	p1 = begin(ia);
	p2 = end(ia);
	p1 += p2 - p1;

	cout << *(p1 - 1) << endl;
	return 0;
}