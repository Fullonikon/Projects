#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void create(int *a, int n)
{
	a = (int*)malloc(sizeof(int)*n);
}

void input(int &a, int n)
{
	for (int i = 0; i < n; i++)a[i] = rand() % 200 - 100;
}

int max(int *a, int n)
{
	int m = a[0];
	for (int i = 0; i < n; i++) if (a[i] > m) m = a[i];
	return m;
}

void main()
{
	int *a; int m, n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	create(a, n);
	input(a, n);
	m = max(a, n);
	printf("max = %d", m);
	free(a);
	getchar();
}