#pragma once
class Val
{
	double rcourse, dcourse;
public:
	void rinit(double r);
	void dinit(double d);
	Val plus(Val b);
	void rshow();
	void dshow();
	Val();
	Val(double a);
	Val(const Val &a)
};