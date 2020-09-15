#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int size = 10;
	double d, *y, *x;
	y = new double[size];
	x = new double[size];
	cout << "y' = sqrt((x-1)/(y+1))" << endl << "Enter step: ";
	cin >> d;
	y[0] = 1;
	x[0] = 1;
	for (int i = 1; i < size; i++)
	{
		x[i] = x[i - 1] + d;
		y[i] = (sqrt((x[i-1]-1)/(y[i-1]+1)))*d + y[i - 1];
	}
	cout << "x:\t";
	for (int i = 0; i < size; i++) cout << x[i] << '\t';
	cout << endl << "y:\t";
	for (int i = 0; i < size; i++) cout << y[i] << '\t';
	return 0;
}