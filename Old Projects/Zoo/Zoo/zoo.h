#pragma once
#include <iostream>

class anim 
{
public:
	virtual void voice() = 0;
};


class tig :public anim
{
public:
	void voice() { std::cout << "Rrr "; }
};


class wolf :public anim
{
public:
	void voice() { std::cout << "Oooo "; }
};


class cage
{
	anim *a;
public:
	cage() { a = NULL; }
	void sit(anim *_a) { if (a != NULL) throw - 1; a = _a; }
	void bb() { if (a != NULL) a = NULL; }
	void show() { if (a == NULL) { std::cout << "... "; } else a->voice(); }
};


class zoo
{
	cage *b;
	int n;
public:
	zoo(int _n) :n(_n) { b = new cage[n]; }
	~zoo() { delete[]b; }
	cage& operator[] (int i) { if (i < 0 || i >= n) throw - 2;	return b[i]; }
	void showc() { for (int i = 0; i < n; i++) { std::cout << "cage[" << i << "] = "; b[i].show(); std::cout << "\n"; } }
};