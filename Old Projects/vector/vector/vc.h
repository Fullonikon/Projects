#pragma once
#include<iostream>

class vc
{
	int *m;
	int n;
public:
	vc(int n = 10);
	~vc();
	vc(const vc &p);
	vc& operator+(const vc &b);
	int& operator[](int ind);
	vc &operator=(const vc&p);
};