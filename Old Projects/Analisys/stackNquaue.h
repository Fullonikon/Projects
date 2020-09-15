#pragma once
#include <iostream>


template <class elem>
class que
{
	int top, end, size;
	elem *qu;
public:
	que(int s)
	{
		top = 0;
		end = s - 1;
		size = s;
		qu = new elem[size];
	}
	que(const que &s)
	{
		top = s.top;
		end = s.end;
		size = s.size;
		qu = new elem[size];
	}
	bool isfull()
	{
		return (top == ((end + 2) % size));
	}
	bool isempty()
	{
		return (top == ((end + 1) % size));
	}
	void push(const elem t)
	{
		if (isfull()) throw - 1;
		end = (end + 1) % size;
		qu[end] = t;
		return;
	}
	elem pop()
	{
		if (isempty()) throw - 2;
		elem a(qu[top].e, qu[top].f);
		top = (top + 1) % size;
		return a;
	}
	elem p()
	{
		elem a(qu[top].e, qu[top].f);
		return  a;
	}
};
template <class elem>
class stack
{
	int size;
	int i;
	elem *st;
public:
	stack(int s)
	{
		size = s;
		st = new elem[size];
		i = -1;
	}
	stack(const stack &s)
	{
		size = s.size;
		i = s.i;
		st = new elem[size];
		for (int j = 0; j <= i; j++)
		{
			st[j] = s.st[j];
		}
	}
	bool isfull() { return (i == size - 1); }
	bool isempty()
	{
	return i == -1;
	}
	void push(elem v)
	{
		if (isfull()) return;
		i++;
		st[i] = v;
		return;
	}
	elem pop()
	{
		i--;
		return st[i + 1];
	}
	elem p()
	{
		return st[i];
	}
};