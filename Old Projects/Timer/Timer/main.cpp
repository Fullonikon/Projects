#include "timer.h"

void main()
{
	timer a, b(45), c(1, 30);
	a = a + 10;
	cout << a << endl;
	a = b + c;
	cout << a << endl;
	a = c - b;
	cout << a << endl;
	a = c - 80;
	cout << a << endl;
	a = 40 - c;
	cout << a << endl;
	return;
}