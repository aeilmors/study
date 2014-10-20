#include <iostream>

using namespace std;

int main()
{
	int i, *const cp = &i;
	int *p1, *const p2 = &i;
	const int ic = 0, &r = ic;
	const int *const p3 = &ic;
	const int *p = nullptr;

	i = ic;
	// p1 = p3;
	// p1 = &ic;
	// p3 = &ic;
	// p2 = p1;
	// ic = *p3;

	return 0;
}