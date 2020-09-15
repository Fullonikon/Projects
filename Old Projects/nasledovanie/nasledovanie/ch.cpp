#include "ch.h"

ch::ch()
{
	a = 0;
}
ch::ch(double aa)
{
	a = aa;
}
int ch::get()
{
	return a;
}
ch& ch::operator+(ch b)
{
	ch res;
	res = a + b.a;
	return res;
}