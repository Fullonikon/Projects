#pragma once
#include <iostream>

class R
{
	int c, z;
public:
	void init(int c, int z);
	R plus(R b);
	R pr(R b);
	void show();
	R();
	R(int a);
	R(const R &a);
	R operator+(int a);
	R operator+(R a);
	friend R operator+(int a, R b);
};