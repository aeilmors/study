//============================================================================
// Name        : HelloWorld.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "Hello world";
	for (auto ch : s) {
		cout << ch;
	}
	cout << endl;
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
