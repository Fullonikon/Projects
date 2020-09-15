#include <stdio.h>
#include <conio.h>
#include <iostream>
#include "functions.h"

int main()
{
	char a, b;
	std::cout << "Input a: ";
	input(&a);
	printf("%s\n", &a);
	resh(&a, &b);
	printf("%c", b);
	return 0;
}