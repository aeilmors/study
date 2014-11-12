/*
 * TestStaticMember.cpp
 *
 *  Created on: 2014年11月10日
 *      Author: jt
 */

#include "TestStaticMember.h"

double TestStaticMember::interest_rate = initRate();
constexpr double TestStaticMember::rrate;

TestStaticMember::TestStaticMember() {
	// TODO Auto-generated constructor stub
	amount = 0;
}

TestStaticMember::~TestStaticMember() {
	// TODO Auto-generated destructor stub
}

double TestStaticMember::initRate() {
	interest_rate = 0.2;
	return interest_rate;
}
