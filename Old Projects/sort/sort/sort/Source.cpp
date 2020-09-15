#include <stdio.h>
#include "function.h"
int main()
{
	int n, a[100];
	printf("Enter n\n");
	scanf("%d", &n);
	input(a, n);
	printf("Inputed array:\n");
	output(a, n);
	sort1(a, n);
	printf("\nSorted array:\n");
	output(a, n);
	return 0;
}