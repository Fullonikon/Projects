#pragma once
#include <stdlib.h>

class elem
{
public:
	char *e;
	int f;
	elem(char *el, int fl)
	{
		int len = strlen(el);
		e = new char[len];
		int i = 0;
		while (el[i] != '\0')
		{
			e[i] = el[i];
			i++;
		}
		e[i] = '\0';
		f = fl;
	}
	elem()
	{
		e = NULL;
		f = -1;
	}
	elem(const elem &el)
	{
		f = el.f;
		e = new char[strlen(el.e)];
		int i = 0;
		while (el.e[i]!='\0')
		{
			e[i] = el.e[i];
			i++;
		}
		e[i] = '\0';
	}
	elem(char el, int fl)
	{
		e = new char[1];
		f = fl;
		e[0] = el;
		e[1] = '\0';
	}
	int gf()
	{
		return f;
	}
	elem &operator=(const elem &el)
	{
		if (this == &el) return *this;
		f = el.f;
		int i = 0;
		e = new char[10];
		while (el.e[i]!='\0')
		{
			e[i] = el.e[i];
			i++;
		}
		e[i] = '\0';
		return *this;
	}
	bool operator==(const elem&el)
	{
		if (f != el.f) return false;
		int i = 0;
		while (el.e[i] != '\0')
		{
			if (e[i] != el.e[i]) return false;
		}
		return true;
	}
	bool operator!=(const elem&el)
	{
		if (f != el.f) return true;
		int i = 0;
		while ((e[i] != '\0') || (el.e[i] != '\0'))
		{
			if (e[i] != el.e[i]) return true;
		}
		return false;
	}
	elem operator+(const elem&el)
	{
		double res = atof(e)+atof(el.e);
		char *res1 = new char[10];
		sprintf(res1, "%lf", res);
		elem r(res1, 4);
		return r;
	}
	elem operator-(const elem&el)
	{
		double res = atof(e) - atof(el.e);
		char *res1 = new char[10];
		sprintf(res1, "%lf", res);
		elem r(res1, 4);
		return r;
	}
	elem operator*(const elem&el)
	{
		double res = atof(e) * atof(el.e);
		char *res1 = new char[10];
		sprintf(res1, "%lf", res);
		elem r(res1, 4);
		return r;
	}
	elem operator/(const elem&el)
	{
		double res = atof(e) / atof(el.e);
		char *res1 = new char[10];
		sprintf(res1, "%lf", res);
		elem r(res1, 4);
		return r;
	}
};