#include "SalesData.h"

SalesData &SalesData::Combine(const SalesData& item)
{
	units_sold += item.units_sold;
	revenue += item.revenue;

	return *this;
}

double SalesData::AvgPrice() const
{
	if (units_sold) {
		return revenue / units_sold;
	} else {
		return 0;
	}
}

SalesData Add(const SalesData &item1, const SalesData &item2)
{
	SalesData sum = item1;

	sum.Combine(item2);

	return sum;
}

std::ostream &print(std::ostream &os, const SalesData &item)
{
	os << item.Isbn() << ' ' << item.units_sold << ' ' << item.revenue << ' ' << item.AvgPrice();

	return os;
}

std::istream &read(std::istream &is, SalesData &item)
{
	double price = 0;

	is >> item.book_no >> item.units_sold >> price;
	item.revenue = price * item.units_sold;

	return is;
}

// int main()
// {
// 	return 0;
// }