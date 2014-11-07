/*
 * Person.cpp
 *
 *  Created on: 2014年11月2日
 *      Author: jt
 */

#include "Person.h"
#include <string>

Person::Person(std::istream &is) {
	// TODO Auto-generated constructor stub
	read(is, *this);
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

const std::string &Person::getAddress() const {
	return address;
}

const std::string &Person::getName() const {
	return name;
}

std::istream &read(std::istream &is, Person &person) {
	is >> person.name >> person.address;

	return is;
}

std::ostream &print(std::ostream &os, const Person &person) {
	os << person.name << person.address;

	return os;
}

//int main()
//{
//
//}
