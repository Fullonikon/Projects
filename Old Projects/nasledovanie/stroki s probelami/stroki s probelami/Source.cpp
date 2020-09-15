#include <stdio.h>
#include <conio.h>
int main()
{
	char a[100], b[10][100];
	int i = 0, j = 0, f = 0;
	printf("Enter string:\n");
	gets_s(a, 100);
	while (a[i] != '\0')
	{
		if ((a[i] == '_') && (a[i + 1] != '_'))
		{
			j++;
			f = 0;
		}
		if (a[i] != '_')
		{
			b[j][f] = a[i];
			f++;
		}
		i++;
	}

	return 0;
}