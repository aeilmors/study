#include <iostream>
#include <vector>
#include <cstring>

using namespace::std;

int main()
{
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	std::vector<int> v4{10};
	std::vector<int> v5{10, 42};
	std::vector<string> v6{10};
	std::vector<string> v7{10, "hi"};

	char ch[6] = {'C', '+', '+'};



	// for (auto it = v5.begin(); it != v5.end(); ++it) {
	// 	cout << *(it + 1) << endl;
	// }

	for (auto it : ch) {
		cout << it << endl;
	}

	// cout << v5.size() << endl;

	return 0;
}