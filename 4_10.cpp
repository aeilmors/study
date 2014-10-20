/***************************************
 Author : jt
 Mail : zhuiyitaosheng@gmail.com
***************************************/

#include <iostream>
//#include <cstring>
#include <vector>
//#include <cstddef>

using namespace::std;

int main()
{
	vector<int> ivec(10, 1);
	vector<int>::size_type count = ivec.size();

	/*对于原始类型(Primitive data type)( Primary type)来说, a++和++a不存在效率，
	但是对于复合类型来说，a++要产生临时变量，效率较低，所以在C++中，
	如果可以用++a的话，建议使用++a */
	for (vector<int>::size_type index = 0; index != ivec.size(); ++index, --count)
		ivec[index] = count;

	for (auto item : ivec)
		cout << item << endl;

	return 0;
} 