#ifndef __SALESDATA_H__
#define __SALESDATA_H__

#include <string>
#include <iostream>

struct SalesData;

//SalesData Add(const SalesData &, const SalesData &);
std::ostream &print(std::ostream &, const SalesData &);
std::istream &read(std::istream &, SalesData &);

struct SalesData {
	SalesData(std::string s, unsigned cnt, double price) : book_no(s), units_sold(cnt), revenue(cnt * price) {std::cout << 1 << std::endl;}
	SalesData() : SalesData("s", 1, 0) {std::cout << 2 << std::endl;}
	explicit SalesData(std::string s) : SalesData(s, 1, 0) {std::cout << 3 << std::endl;}
	SalesData(std::istream &is) : SalesData() { read(is, *this); std::cout << 4 << std::endl; }
	std::string Isbn() const {return book_no;}
	SalesData &Combine(const SalesData &);	//const reference can refer to a temporary
//	SalesData &Combine(SalesData &);	//wrong, non-const reference cannot refer to a temporary
//	SalesData &Combine(SalesData );	//pass
	inline double AvgPrice() const;
	std::string book_no;		//ISBN No.
	unsigned units_sold = 0;	//Sold number
	double revenue = 0.0;		//Sold total money
};


#endif
