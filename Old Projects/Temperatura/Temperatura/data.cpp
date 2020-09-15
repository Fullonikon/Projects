#include "data.h"
#include <iostream>

data::data()
{
	h = 0; d = 0; m = 0; v = NULL;
}
data::data(int dd, int mm, int hh)
{
	d = dd; m = mm; h = hh; v = 0;
	if (d < 0 || d>31 || m < 0 || m>12 || h < 0 || h>24) throw - 1;
	if (h > 8 && h < 19) v = 1;
	else v = 2;
}
int data::operator>(data b)
{
	int res = 1;
	if (m < b.m) res = 0;
	else {
		if (d < b.d) res = 0;
		else if (h < b.h) res = 0;
	};
	return res;
}
int data::operator<(data b)
{
	int res = 1;
	if (m > b.m) res = 0;
	else {
		if (d > b.d) res = 0;
		else if (h > b.h) res = 0;
	};
	return res;
}
void data::show()
{
	std::cout << d << "." << m << " " << h << ":00";
}
int data::getv()
{
	return v;
}