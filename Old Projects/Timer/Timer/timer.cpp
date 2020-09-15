#include "timer.h"
using namespace std;

timer::timer()
{
	h = 0; m = 0;
}
timer::timer(int a)
{
	h = a / 60; m = a % 60;
}
timer::timer(int a, int b)
{
	h = a; m = b;
}
timer timer::operator+(int a)
{
	timer res;
	res.h = (h * 60 + a) / 60;
	res.m = (m + a) % 60;
	return res;
}
timer operator+ (int a, timer b)
{
	timer res;
	res.h = (b.h * 60 + a) / 60;
	res.m = (b.m + a) % 60;
	return res;
}
timer timer::operator+(timer a)
{
	timer res;
	res.h = (h * 60 + m + a.h * 60 + a.m) / 60;
	res.m = (h * 60 + m + a.h * 60 + a.m) % 60;
	return res;
}
timer timer::operator- (int a)
{
	timer res;
	res.h = (h * 60 - a) / 60;
	res.m = (h * 60 + m - a) % 60;
	return res;
}
timer timer::operator-(timer a)
{
	timer res;
	res.h = (h * 60 + m - a.h * 60 - a.m) / 60;
	res.m = (h * 60 + m - a.h * 60 - a.m) % 60;
	return res;
}
timer operator-(int a, timer b)
{
	timer res;
	res.h = (a-b.h*60-b.m) / 60;
	res.m = (a-b.h*60-b.m) % 60;
	return res;
}
ostream& operator<<(ostream&o, timer&a)
{
	o << a.h << ":" << a.m;
	return o;
}
