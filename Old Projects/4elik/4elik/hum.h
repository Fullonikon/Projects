#pragma once
#include <iostream>
using namespace std;

class hum
{
	char *f;
	int v;
public:
	hum();
	hum(int a);
	hum(int a, char *b);
	~hum();
	hum& operator=(const hum&a);
	friend ostream&operator<<(ostream&o, hum);
};