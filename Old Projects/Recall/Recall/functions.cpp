#include <stdio.h>
#include <conio.h>
#include <iostream>

void input(char *a)
{
	gets_s(a,100);
}

void resh(char *a, char *b)
{
	int max = 0, ind[100], nm = 0, t = 0;
	while (a[nm] != '\0')nm++;
	for (int i = 0; i < nm; i++)
	{
		for (int j = i; j < nm; j++) if (a[i] == a[j]) t++;
		if (t > nm)
		{
			nm = t; b[0] = a[i];
		}
		t = 0;
	}
}