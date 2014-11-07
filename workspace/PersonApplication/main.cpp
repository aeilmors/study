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
#include "WindowMrg.h"

using namespace std;

int main()
{
	Screen myscreen(5, 5, 'X');
//	const Screen kscreen(5, 3, 'k');
//	myscreen.set('#').display(cout);
//	kscreen.display(cout);
	myscreen.move(4, 0).set('#').display(cout);

	return 0;
}
