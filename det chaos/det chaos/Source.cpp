#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	double res = 0.8;
	double a = 2.3;
	cout << fixed;
	cout.precision(5);
	cout << "input = " << res << " a = " << a << "\n";
	for (int i = 0; i < 200; i++)
	{
		res = a * res * (1 - res);
		cout << res << "\n";
	}
	int getch();
}