#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	// ivec[9] = 10;

	for (int i = 0; i < 10; ++i) {
		ivec.push_back(i);
	}

	for (decltype(ivec.size()) index = 0; index < 10; ++index) {
		ivec.push_back(index);
	}

	for (auto i : ivec) {
		cout << i << endl;
	}

	for (auto &i : ivec) {
		i *= i;
	}

	for (auto i : ivec) {
		cout << i << endl;
	}

	cout << "The size of ivec is " << ivec.size() << endl;

	return 0;
}