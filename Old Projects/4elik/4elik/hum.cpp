#include"hum.h"

hum::hum()
{
	v = 0;
	*f = 'NULL';
}
hum::hum(int a, char*b)
{
	v = a;
	int n, i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	n = i;
	f = new char[n];
	for (i = 0; i < n; i++)
	{
		f[i] = b[i];
	}
}
hum::hum(int a)
{
	v = a;
	*f = 'NULL';
}
hum::~hum()
{
	delete[]f;
}