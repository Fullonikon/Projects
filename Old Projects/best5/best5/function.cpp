#include <stdio.h>
#include <stdlib.h>

void input(int *a, int *b, int n)
{
	for (int i = 0; i < n; i++) a[i] = rand() % 10;
	for (int i = 0; i < n; i++) b[i] = rand() % 4 + 1;
}

void output(int *a, int n)
{
	for (int i = 0; i < n; i++) printf("%lf\t", a[i]);
}

void sr(int *a, int *b, int n, double *c)
{
	int i, j;
	double b1[100];
	for (int f = 0; f < n; f++)
	{
		c[f] = 0;
		b1[f] = b[f];
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n - 1; j++)
		{
			if (a[j] == -1) continue;
			if (a[i] == a[j])
			{
				b1[i] = (b1[i] + b1[j]) / 2.0;
				a[j] = -1;
			}
		}
	}
	for (i = 0; i < n; i++) if (a[i] == a[n])
	{
		b1[i] = (b1[i] + b1[n]) / 2.0;
		a[j] = -1;
	}
	int k = 0;
	for (i = 0; i < n; i++) if (a[i] != -1)
	{
		c[k] = b1[i];
		k++;
	}
	//sortirovka//
}