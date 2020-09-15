#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu_input(int a[], int &n){
	int op = -1;

	while(op != 3)
	{
		system("cls");
		printf("0. get size \n");
		printf("1. rand arr \n");
		printf("2. show el. \n");
		printf("3. exit \n");

		scanf("%d", &op);

		switch(op)
		{
			case 0: 
				printf("enter size of array\n");
				scanf("%d", &n);
				getch();
				break;
			case 1: 
				for(int i = 0; i < n; i++)
				{
					a[i] = rand()%10;
				}
				printf("complit\n");
				getch();
				break;
			case 2: 
				for(int i = 0; i < n; i++)
				{
					printf("%d ",a[i]);
				}
				printf("\n");
				getch();
				break;

		}
	}
}

void menu(int a[]){
	int n;
	n = 0;

	int op = 0;

	int v = 0;

	while(v != 27)
	{
		system("cls");
		if(op == 0) printf("* ");
		printf("0. input \n");
		if(op == 1) printf("* ");
		printf("1. sum el. \n");
		if(op == 2) printf("* ");
		printf("2. exit \n");

		v = getch();
		if(v == 224)
		{
			v = getch();
		}

		if(v == 80)
		{
			op  = (op + 1) % 3;
		}
		if(v == 72)
		{
			op  = (op + 2) % 3;
		}

//		scanf("%d", &op);

		if(v == 13)
		{
			int sum = 0 ;
					
			switch(op)
			{
				case 0: 
					menu_input(a, n);
					break;
				case 1: 
					for(int i = 0; i < n; i++)
					{
						sum += a[i];
					}
					printf("sum :%d\n", sum);
					getch();
					break;
				case 2:
					v = 27;
					break;
			}
		}
	}
}