#include <stdio.h>
#include "function.h"
int main()
{
	int a, b, c, n;
	printf("Enter A and B\n");
	scanf("%d %d", &a, &b);
	c = nod(a, b);
	printf("%d\n", c);
	printf("Enter n");
	scanf("%d", &n);
	fib(n);
	return 0;
}