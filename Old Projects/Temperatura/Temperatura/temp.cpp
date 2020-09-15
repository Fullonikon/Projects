#include "temp.h"
#include <iostream>

temp::temp()
{
	k = 0;
	for (int i = 0; i < 100; i++)
	{
		t[i] = 0;
	};
}
void temp::add(data b, int tt)
{
	if (a[k] > b) throw - 2;
	a[k] = b;
	t[k] = tt;
	k++;
	if (k > 99) throw - 3;
}
void temp::showd()
{
	double srd = 0; double k = 0.0;
	for (int i = 0; i < 100; i++)
	{
		if (a[i].getv() == 1) 
		{
			srd = srd + t[i];
			k++;
		}
	}
	if (k!=0) srd = srd / k;
	else throw - 4;
	std::cout << "Average day temp:" << srd;
}
void temp::shown()
{
	double srn = 0; double k = 0.0;
	for (int i = 0; i < 100; i++)
	{
		if (a[i].getv() == 2)
		{
			srn = srn + t[i];
			k++;
		}
	}
	if (k != 0) srn = srn / k;
	else throw - 5;
	std::cout << "Average night temp:" << srn;
}