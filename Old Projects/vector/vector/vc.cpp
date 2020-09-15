#include "vc.h"

vc::vc(int n1) :n(n1)
{
	m = new int[n];
}
vc::~vc()
{
	delete[]m;
}
vc::vc(const vc&p)
{
	n = p.n;
	m = new int[n];
	for (int i = 0; i < n; i++)
		m[i] = p.m[i];
}
vc&vc::operator=(const vc&p)
{
	if (this == &p) return p;
	delete[]m;
	n = p.n;
	m = new int[n];
	for (int i = 0; i < n; i++)
	{
		m[i] = p.m[i];
	}
	return *this;
}
int& vc::operator[](int ind)
{
	return m[ind];
}