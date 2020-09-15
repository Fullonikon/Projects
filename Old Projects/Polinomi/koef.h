#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class koef
{
public:
	int st;				//степени монома
	double a;			//множители
	koef()
	{
		st = 0;
		a = 0;
	}
	koef(int s1, int s2, int s3)
	{
		if (s1 > 19 || s1 < 0 || s2>19 || s2 < 0 || s3>19 || s3 < 0) throw - 1; // Превышение коэфициентов степеней
		st = s1 * 400 + s2 * 20 + s3;
		a = 0;
	}
	koef(int s1, int s2, int s3, double aa)
	{
		if (s1 > 19 || s1 < 0 || s2>19 || s2 < 0 || s3>19 || s3 < 0) throw - 1; // Превышение коэфициентов степеней
		st = s1 * 400 + s2 * 20 + s3;
		a = aa;
	}
	bool operator>(const koef b)
	{
		return st > b.st;
	}
	bool operator<(const koef b)
	{
		return st < b.st;
	}
	bool operator==(const koef b)
	{
		return st == b.st;
	}
	bool operator!=(const koef b)
	{
		return st != b.st;
	}
	void operator=(const koef b)
	{
		st = b.st;
		a = b.a;
	}
	koef& operator*(const koef b)
	{
		int res = st + b.st;
		if (res > 7999)throw - 1;					// Превышение коэфициентов
		double ares = a * b.a;
		koef k(res / 400, (res % 400) / 20, res % 20, ares);
		return k;
	}
	void seta(double a)
	{
		this->a = a;
	}
	double geta()
	{
		return a;
	}
};

struct link
{
	koef k;
	link *n = NULL;
};