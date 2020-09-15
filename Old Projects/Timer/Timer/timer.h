#pragma once
#include <iostream>
using namespace std;

class timer 
{
	int h, m;
public:
	timer();
	timer(int a);
	timer(int a, int b);
	timer operator+(int a);
	timer operator+(timer a);
	friend timer operator+ (int a, timer b);
	timer operator-(int a);
	timer operator-(timer a);
	friend timer operator- (int a, timer b);
	friend ostream& operator<<(ostream&o, timer&a);
};