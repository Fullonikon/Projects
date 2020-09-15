#include <stdio.h>
#include <math.h>

int nod(int a, int b)
{
	if (a%b == 0) return b;
	int c = a%b;
	return nod(b, c);
}