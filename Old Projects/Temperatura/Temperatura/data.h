#pragma once

class data
{
	int d, m, h, v;
public:
	data();
	data(int dd, int mm, int hh);
	int operator>(data b);
	int operator<(data b);
	void show();
	int getv();
};