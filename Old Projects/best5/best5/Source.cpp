#include <stdio.h>
#include "function.h"

void main()
{
	int n;
	int a[100], b[100];
	double c[100];
	printf("Enter n\n");
	scanf("%d", &n);
	input(a, b, n);
	sr(a, b, 10, c);
	printf("Marks:\n");
	output(a, n);
}