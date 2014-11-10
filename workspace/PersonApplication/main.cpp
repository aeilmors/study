/*
 * main.cpp
 *
 *  Created on: 2014年11月7日
 *      Author: jt
 */

#include <iostream>
#include <string>
#include <vector>
#include "Screen.h"
#include "SalesData.h"
#include "Person.h"
#include "WindowMgr.h"

using namespace std;

int main()
{
//	Screen myscreen(5, 5, 'X');
//	const Screen kscreen(5, 3, 'k');
//	myscreen.set('#').display(cout);
//	kscreen.display(cout);
//	myscreen.move(4, 0).set('#').display(cout);
//	string::size_type foo;
//	foo = myscreen.width;

	SalesData sd1;	//SalesData sd1() is s declaration of a function
	print(cout, sd1);
	cout << endl;
//	sd1.Combine(string("s"));	//explicit ban convert
	print(cout, sd1);
	cout << endl;
//	SalesData sd2("C++");
//	SalesData sd3("Python", 1, 20);
//	SalesData sd4(cin);

	return 0;
}
