#include <stdio.h>
#include <stdlib.h>

void input(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++) a[i] = rand() % 10;
}

void output(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void sort(int *a, int n)
{
	int k, f = 1;
	while (f == 1)
	{
		f = 0;
		for (int i = 0; i < n-1; i++)
		{
			if (a[i + 1] > a[i])
			{
				f = 1;
				k = a[i]; a[i] = a[i + 1]; a[i + 1] = k;
			}
		}
	}
}

void sort1(int *a, int n)
{
	int i, min;
	for (i = 0; i < n; i++)
	{
		min = i;
		for (int j = 0; j < n; j++) if (a[j] < a[min]) {
			min = j;
		}
		int k;
		k = a[i]; a[i] = a[min]; a[min] = k;
	}
}