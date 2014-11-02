#ifndef __SALESDATA_H__
#define __SALESDATA_H__

#include <string>
#include <iostream>

struct SalesData {
	std::string Isbn() const {return book_no;}
	SalesData &Combine(const SalesData &);
	double AvgPrice() const;
	std::string book_no;		//ISBN No.
	unsigned units_sold = 0;	//Sold number
	double revenue = 0.0;		//Sold total money
};

SalesData Add(const SalesData &, const SalesData &);
std::ostream &print(std::ostream &, const SalesData &);
std::istream &read(std::istream &, SalesData &);

#endif