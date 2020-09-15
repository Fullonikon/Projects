#include "ch.h"
#include "pch.h"
#include <iostream>

void main()
{
	ch a(5.0);
	pch b(2.0);
	b.show();
	printf("\n");
	a = a + b;
	return;
}