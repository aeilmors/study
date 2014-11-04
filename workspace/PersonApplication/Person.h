/*
 * Person.h
 *
 *  Created on: 2014年11月2日
 *      Author: jt
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>

class Person {
	friend std::istream &read(std::istream &, Person &);
	friend std::ostream &print(std::ostream &, const Person &);
public:
	Person() = default;
	Person(const std::string &name, const std::string &address) : name(name), address(address) {}
	Person (std::istream &);
	virtual ~Person();

	const std::string &getName() const;
	const std::string &getAddress() const;

private:
	std::string name;
	std::string address;
};

std::istream &read(std::istream &, Person &);
std::ostream &print(std::ostream &, const Person &);

#endif /* PERSON_H_ */
