#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void menu_input(int *a, int &n) //���� ��� ����� �������
{
	int op = -1;

	while (op != 4)
	{
		system("cls");
		printf("0. get size \n");//������ ������ �������
		printf("1. rand arr \n");//��������� ����
		printf("2. enter arr \n");//������ ����
		printf("3. special arr\n");//������ ��� ���������� ���������
		printf("4. exit \n");

		scanf("%d", &op);

		switch (op)
		{
		case 0:
			printf("enter size of array\n");
			scanf("%d", &n);
			getchar();
			break;
		case 1:
			inputRand(a, n);
			printf("complite\n");
			getchar();
			getchar();
			break;
		case 2:
			inputHand(a, n);
			getchar();
			break;
		case 3:
			input100(a, n);
			printf("complite\n");
			getchar();
			getchar();
			break;
		}
	}
}

void tests(int n) //���� ��� ������
{
	int a[10000], a1[10000], nmax = 0, op = -1, step = 100;

	while (op != 7)
	{
		system("cls");
		printf("0. get minimum size\n"); //��������� ������ �������
		printf("1. get maximum size\n"); //�������� ������ �������
		printf("2. test bubble sort 1\n"); //���� ������� ��������
		printf("3. test bubble sort 2\n"); //���� ������� ��������
		printf("4. test quick sort\n"); //���� ������� ����������
		printf("5. test count sort\n"); //���� ���������� ���������
		printf("6. get step\n"); //��������� �������� ����
		printf("7. exit\n"); //�����

		scanf("%d", &op);
		int nn = n;

		switch (op)
		{
		case 0:
			printf("enter minimum size: ");
			scanf("%d", &n);
			break;
		case 1:
			printf("enter maximum size: ");
			scanf("%d", &nmax);
			break;
		case 2:
			printf("bubble sort 1 test:\n");
			for (nn; nn <= nmax; nn = nn + step)
			{
				double t = clock();
				inputRand(a1, nn);
				sortpz1(a1, nn);
				double t1 = clock();
				printf("time spend for %d elemts: %lf \n", nn, t1/CLOCKS_PER_SEC-t/CLOCKS_PER_SEC);
			}
			getchar();
			getchar();
			break;
		case 3:
			printf("bubble sort 2 test:\n");
			for (nn; nn <= nmax; nn = nn + step)
			{
				float t = clock();
				inputRand(a1, nn);
				sortpz2(a1, nn);
				float t1 = clock();
				printf("time spend for %d elements: %f \n", nn, t1 / CLOCKS_PER_SEC - t / CLOCKS_PER_SEC);
			}
			getchar();
			getchar();
			break;
		case 4:
			printf("quick sort test:\n");
			for (nn; nn <= nmax; nn = nn + step)
			{
				float t = clock();
				inputRand(a1, nn);
				qsort1(a1, 0, nn-1);
				float t1 = clock();
				printf("time spend for %d elemnts: %f \n", nn, t1 / CLOCKS_PER_SEC - t / CLOCKS_PER_SEC);
			}
			getchar();
			getchar();
			break;
		case 5:
			printf("count sort test:\n");
			for (nn; nn <= nmax; nn = nn + step)
			{
				float t = clock();
				input100(a1, nn);
				linsort(a1, nn);
				float t1 = clock();
				printf("time spend for %d elemnts: %f \n", nn, t1 / CLOCKS_PER_SEC - t / CLOCKS_PER_SEC);
			}
			getchar();
			getchar();
			break;
		case 6:
			printf("enter step: ");
			scanf("%d", &step);
			break;
		}
	}
}

void main()
{
	int a[10000], a1[10000], op = -1, n = 0;
	while (op != 6)
	{
		system("cls");
		printf("0. input \n");//����
		printf("1. bubble sort 1 \n");//������ ���������� ���������
		printf("2. bubble sort 2 \n");//������ ���������� ���������
		printf("3. quick sort\n");//������� ����������
		printf("4. count sort (special arr requaried) \n");//���������� �� �������� �����
		printf("5. tests\n");// �����
		printf("6. exit\n");

		scanf("%d", &op);

		switch (op)
		{
		case 0:
			menu_input(a, n);
			break;
		case 1:
			copya(a, a1, n);
			output(a, n);
			sortpz1(a1, n);
			output(a1, n);
			getchar();
			getchar();
			break;
		case 2:
			copya(a, a1, n);
			output(a, n);
			sortpz2(a1, n);
			output(a1, n);
			getchar();
			getchar();
			break;
		case 3:
			copya(a, a1, n);
			output(a, n);
			qsort1(a1, 0, n-1);
			output(a1, n);
			getchar();
			getchar();
			break;
		case 4:
			copya(a, a1, n);
			output(a, n);
			linsort(a1, n);
			output(a1, n);
			getchar();
			getchar();
			break;
		case 5:
			tests(n);
			break;
		case 6:
			break;
		}
	}
}