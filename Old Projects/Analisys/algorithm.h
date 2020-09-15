#pragma once
#include <iostream>
#include "elems.h"
#include "stackNquaue.h"
using namespace std;


int analysis(char *raw)
{
	que<elem> inque(20), outque(20); // очередь элементов
	stack<elem> st(20); // 
	char wos[100]; // данные w/o space 
	int i = 0;
	while (raw[i] != '\0')
	{
		if (raw[i] == ' ')
		{
			i++;
			continue;
		}
		wos[i] = raw[i];
		i++;
	} // удаление пробелов
	wos[i] = '\0';
	i = 0;
	int f = 0;
	while (wos[i] != '\0')
	{
		char *t;
		t = new char[10];
		int g = 0;
		int f1 = 0;
		while ((((wos[i] >= '0') && (wos[i] <= '9'))||(wos[i]=='.')) && ((wos[i + 1] >= '0') && (wos[i + 1] <= '9')||(wos[i+1]=='.'))) // если после цифры стоит ещё одна
		{
			if ((f1 == 0) || ((wos[i] >= '0') && (wos[i] <= '9')))
			{
				t[g] = wos[i];
				if (wos[i] == '.') f1 = 1;
				i++;
				g++;
			}
			else i++;
		}
		if ((wos[i] >= '0') && (wos[i] <= '9')) // если после цифры идёт не цифра
		{
			t[g] = wos[i];
			if (t[g] == '.')
			{
				g++;
				t[g] = '0';
			}
			t[g + 1] = '\0';
		}
		if (t[0] >= '0' && t[0] <= '9') // если вписали число, вносим его
		{
			elem a(t, 4);
			inque.push(a);
		}
		if (wos[i] == '+') // внесение знаков
		{
			elem a('+', 2);
			inque.push(a);
		}
		if (wos[i] == '-')
		{
			elem a('-', 2);
			if (i == 0)
			{
				t[0] = '0'; t[1] = '\0';
				elem b(t, 4);
				inque.push(b);
			}
			else if ((wos[i - 1] < '0') && (wos[i - 1] > '9'))
			{
				t[0] = '0'; t[1] = '\0';
				elem b(t, 4);
				inque.push(b);
			}
			inque.push(a);
		}
		if (wos[i] == '*')
		{
			elem a('*', 3);
			inque.push(a);
		}
		if (wos[i] == '(')
		{
			elem a('(', 1);
			inque.push(a);
		}
		if (wos[i] == ')')
		{
			elem a(')', 1);
			inque.push(a);
		}
		i++;
	}
	elem stop('\0', 100); 
	inque.push(stop);
	elem ei('1', 4);
	while (ei != stop)
	{
		ei = inque.pop();  // 4 - число; 3 - *; 2 - +-; 1 - ().
		elem et;
		if (ei.gf() == 4)
		{
			outque.push(ei);
			continue;
		}
		if (ei.gf() == 3)
		{
			int f = 0;
			if (st.isempty())
			{
				st.push(ei);
				f = 1;
			}
			if (f == 1)continue;
			if (st.p().f < 3)
			{
				st.push(ei);
				f = 1;
			}
			if (f == 1)continue;
			while (!st.isempty() && (st.p().f >= 3))
			{
				outque.push(st.p());
				st.pop();
			}
			st.push(ei);
			continue;
		}
		if (ei.gf() == 2)
		{
			int f = 0;
			if (st.isempty())
			{
				st.push(ei);
				f = 1;
			}
			if (f == 1)continue;
			if (st.p().f < 2)
			{
				st.push(ei);
				f = 1;
			}
			if (f == 1)continue;
			while ((!st.isempty()) && (st.p().f >= 2))
			{
				outque.push(st.p());
				st.pop();
			}
			st.push(ei);
			continue;
		}
		if (ei.gf() == 1)
		{
			if (ei.e[0] == '(')
			{
				st.push(ei);
			}
			if (ei.e[0] == ')')
			{
				et = st.pop();
				while (et.e[0] != '(')
				{
					outque.push(et);
					et = st.pop();
				}
			}
		}
	}
	while (!st.isempty())
	{
		outque.push(st.pop());
	}
	outque.push(stop);
	elem l(' ', 99);
	ei = l;
	while (ei != stop)
	{
		elem ea, eb, er;
		ei = outque.pop();
		if (ei.gf() == 4)
		{
			st.push(ei);
			continue;
		}
		if (ei.e[0] == '+')
		{
			ea = st.pop();
			eb = st.pop();
			er = ea + eb;
			st.push(er);
		}
		if (ei.e[0] == '-')
		{
			ea = st.pop();
			eb = st.pop();
			er = eb - ea;
			st.push(er);
		}
		if (ei.e[0] == '*')
		{
			ea = st.pop();
			eb = st.pop();
			er = ea * eb;
			st.push(er);
		}
		if (ei.e[0] == '/')
		{
			ea = st.pop();
			eb = st.pop();
			er = eb / ea;
			st.push(er);
		}
	}
	int res = atof(st.pop().e);
	return res;
}