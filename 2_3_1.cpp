#include <iostream>

using namespace std;

int main()
{
	// int i = 0, & r1 = i;
	// double d = 0, &r2 = d;

	// cout << r2 << " " << r1 << " " << i << " " << d << endl;
	// r2 = 3.14159;
	// cout << r2 << " " << r1 << " " << i << " " << d << endl;
	// r2 = r1;
	// cout << r2 << " " << r1 << " " << i << " " << d << endl;
	// i = r2;
	// cout << r2 << " " << r1 << " " << i << " " << d << endl;
	// r1 = d;
	// cout << r2 << " " << r1 << " " << i << " " << d << endl;

	// int i, &ri = i;
	// i = 5;
	// ri = 10;
	// cout << i << " " << ri << endl;

	// const int i = 0;
	// int *p = &i;

	const int i = 0;
	int &p = i;

	return 0;
}