#pragma once
#include "R.h"
#include "function.h"
#include <iostream>


	void R::init(int _c, int _z)
	{
		if (_z == 0)
		{
			printf("Error");
			return;
		}
		c = _c;
		z = _z;
	}
	R R::plus(R b)
	{
		R res;
		res.c = (c*b.z + b.c*z) / nod(z, b.z);
		res.z = b.z*z / nod(z, b.z);
		return res;
	}
	R R::pr(R b)
	{
		R res;
		res.c = (c*b.c) / nod(z, b.z);
		res.z = b.z*z / nod(z, b.z);
		return res;
	}
	void R::show()
	{
		std::cout << "(" << c << ", " << z << ")";
	}
	R::R()
	{
		init(0, 1);
	}
R::R(int a)
{
	init(a, 1);
}
R::R(const R &a)
{
	init(a.c, a.z);
}
R R::operator+(R a)
{
	R res;
	res.c = (c*a.z + a.c*z) / nod(z, a.z);
	res.z = a.z*z / nod(z, a.z);
	return res;
}
R R::operator+(int a)
{
	R res;
	res.c = c+a*z;
	res.z = z;
	return res;
}
R operator+(int a, R b)
{
	R res;
	res.c = b.c + a * b.z;
	res.z = b.z;
	return res;
}
