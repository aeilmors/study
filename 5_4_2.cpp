/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <cstring>
#include <vector>
//#include <cstddef>
#include <limits>

using namespace::std;

bool is_prefix(vector<int> shorter, vector<int> longer);
void show(vector<int> v);

int main()
{
	vector<int> v1{1, 2, 3, 4, 5, 110}, v2{1, 2, 3, 4};

	bool is_prefix_main;
	if (v1.size() < v2.size())
	{
		is_prefix_main = is_prefix(v1, v2);
	} else
	{
		is_prefix_main = is_prefix(v2, v1);
	}
	show(v1);
	show(v2);
	cout << (is_prefix_main ? "True" : "False") << endl;

	return 0;
} 

bool is_prefix(vector<int> shorter, vector<int> longer)
{
	bool is_prefix_func = true;

	for (vector<int>::size_type index = 0; index != shorter.size(); ++index)
	{
		if (shorter[index] != longer[index])
		{
			is_prefix_func = false;
			break;
		}
	}

	return is_prefix_func;
}

void show(vector<int> v)
{
	for (auto item : v)
		cout << item << ' ';
	cout << endl;
}