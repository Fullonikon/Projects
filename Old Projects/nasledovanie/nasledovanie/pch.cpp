#include "pch.h"
#include <iostream>

pch::pch(double pp):ch(pp){}
void pch::show()
{
	std::cout << "val:" << get();
	return;
}