#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inputRand(int *a, int n) //случайный ввод
{
	for (int i = 0; i < n; i++)a[i] = rand() % 200 - 100;
}

void input100(int *a, int n) //случайный ввод для целочисленной сортировки
{
	for (int i = 0; i < n; i++)a[i] = rand() % 100;
}

void inputHand(int *a, int n) //ручной ввод
{
	for (int i = 0; i < n; i++)scanf("%d", a[i]);
}

void output(int *a, int n) //вывод
{
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	printf("\n");
}

void copya(int *a, int *b, int n) //копирование массива в новую переменную
{
	for (int i = 0; i < n; i++) b[i]=a[i];
}

void sortpz1(int *a, int n) //первый пузырь
{
	int i, j;
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int k; k = a[j]; a[j] = a[j + 1]; a[j + 1] = k;
			}
		}
}

void sortpz2(int *a, int n) // второй пузырь
{
	int j, nn;
	do {
		nn = 0;
		for (j = 1; j < n; ++j)
			if (a[j - 1] > a[j])
			{
				int k = a[j - 1]; a[j - 1] = a[j]; a[j] = k;
				nn = j;
			}
		n = nn;
	} while (n);
}

void qsort1(int *a, int mi, int ma) //первая быстрая
{
	if (mi < ma)
	{
		int left = mi, right = ma, k = a[(left + right) / 2];
		do
		{
			while (a[left] < k)left++;
			while (a[right] > k)right--;
			if (left <= right)
			{
				int t = a[left]; a[left] = a[right]; a[right] = t; left++; right--;
			}
		} while (left <= right);
		qsort1(a, mi, right);
		qsort1(a, left, ma);
	}
} //вызов через qsort1(a, 0, n-1);//

void linsort(int *a, int n) // сортировка за линйное время, требует "специальный" массив
{
	int b = 0, c[101];
	for (int i = 0; i <= 100; i++) c[i] = 0;
	for (int i = 0; i < n; i++) c[a[i]]++;
	int j, i;
	for (j = 0; j < 101; j++)
		for (i = 0; i < c[j]; i++)
		{
			a[b] = j;
			b++;
		}
}