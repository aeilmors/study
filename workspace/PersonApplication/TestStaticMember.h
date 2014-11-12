/*
 * TestStaticMember.h
 *
 *  Created on: 2014年11月10日
 *      Author: jt
 */

#ifndef TESTSTATICMEMBER_H_
#define TESTSTATICMEMBER_H_

#include <string>
#include <vector>

class TestStaticMember {
public:
	TestStaticMember();
	virtual ~TestStaticMember();

	void calculate() {amount += amount * interest_rate;}	//can use static member
	static double rate() {return interest_rate;}
//	static double total() {return amount;}	//wrong cannot use non-static member
private:
	std::string owner;
	double amount;
	static double interest_rate;
	static constexpr double rrate = 6.5;
	static constexpr int vec_size = 20;
	static double d_array[vec_size];	//right
//	static std::vector<double> d_vec(vec_size);	//vec_size is not a type.why?
	static double initRate();
};


#endif /* TESTSTATICMEMBER_H_ */
