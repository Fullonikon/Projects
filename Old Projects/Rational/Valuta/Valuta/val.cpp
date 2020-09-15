#include "val.h"
#include <iostream>

void Val::rinit(double r)
{
	rcourse = r;
	dcourse = r * 60;
}
void Val::dinit(double d)
{
	dcourse = d;
	rcourse = d / 60;
}
Val Val::plus(Val b)
{
	Val res;
	res.rcourse = rcourse + b.rcourse;
	res.dcourse = dcourse + b.dcourse;
	return res;
}
void Val::rshow()
{
	std::cout << rcourse << "Ð.\t";
}
void Val::dshow()
{
	std::cout << dcourse << "$\t";
}
Val::Val()
{
	rinit(0);
}
Val::Val(double a)
{
	rinit(a);
}
Val::Val(const Val &a)
{
	rinit(a.rcourse);
}