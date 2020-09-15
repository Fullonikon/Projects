#include "temp.h"
#include <iostream>

void main()
{
	data a, b(1, 2, 3), c(4, 5, 10), d(7, 8, 11);
	temp aa;
	try{
		aa.add(b, 12);
		aa.add(c, 13);
		aa.add(d, 14);
		aa.showd();
		printf("\n");
		aa.shown();
	}
	catch (int er)
	{
		if (er == -1) std::cout << "Inappropriate data";
		if (er == -2) std::cout << "Wrong data adding";
		if (er == -3) std::cout << "Data overflow";
		if (er == -4) std::cout << "No day temperatures";
		if (er == -5) std::cout << "No night tempertures";
	}
	return;
}