#pragma once
#include <iostream>
#include "koef.h"
using namespace std;


class list
{
	link *h;
	link *cur;
public:
	list()
	{
		h = NULL;
		cur = NULL;
	}
	void insf(koef ko)				//������� ������� � �����
	{
		if (ko.a == 0)return;
		link *p = new link;
		if (h == NULL)
		{
			h = p;
			cur = p;
			h->k = ko;
			return;
		}
		cur->n = p;
		cur = cur->n;
		cur->k = ko;
	}
	void resetcur()		// ������� �� ������
	{
		cur = h;
	}
	void curend()		// ������� � �����
	{
		resetcur();
		while (cur->n != NULL)cur = cur->n;
	}
	void ins(koef ko) // ����� ������� (�����)
	{
		if (ko.a == 0)return;
		link *p = new link;
		if (h == NULL) // ���� �����
		{
			h = p;
			h->k = ko;
			h->n = NULL;
			return;
		}
		if (h->k > ko) // ���� ���� �������� ����� �������
		{
			p->n = h;
			h = p;
			h->k = ko;
			return;
		}
		p = h;
		while ((p->k < ko) && (p->n != NULL)) p = p->n; // ������� ������ �����
		if (p->n == NULL)
		{
			p->k = ko;
			return;
		}
		link *t = new link;
		if (p->k == ko) // ���� ���������� �������, �� ����������
		{
			if ((ko.a + p->k.a) == 0)
			{
				delete[]t;
				return;
			}
			t->n = p->n;
			p->n = t;
			ko.a = ko.a + p->k.a;
			t->k = ko;
			return;
		}
		t->n = p->n;
		p->n = t;
		t->k = ko;
		return;
	}
	bool isempty()
	{
		return (h == NULL);
	}
	list& operator+(const list &b)
	{
		link *t1 = NULL;
		link *t2 = NULL;
		t1 = h;
		t2 = b.h;
		list res;
		while ((t1 != NULL) && (t2 != NULL)) // ������� ��� �������� � ��������� ������� ��������, ������ ��� ������ ��������� � ������ �����
		{
			if (t1->k < t2->k)
			{
				res.insf(t1->k);
				t1 = t1->n;
				continue;
			}
			if (t1->k == t2->k)
			{
				koef r;
				r = t1->k;
				r.seta(t1->k.a + t2->k.a);
				if (r.a == 0)
				{
					t1 = t1->n;
					t2 = t2->n;
					continue;
				}
				res.insf(r);
				t1 = t1->n;
				t2 = t2->n;
				continue;
			}
			if (t1->k > t2->k)
			{
				res.insf(t2->k);
				t2 = t2->n;
				continue;
			}
		}
		while (t1 != NULL) // ���������� �������
		{
			res.insf(t1->k);
			t1 = t1->n;
		}
		while (t2 != NULL)
		{
			res.insf(t2->k);
			t2 = t2->n;
		}
		return res;
	}
	list& operator-(const list &b)
	{
		link *t1 = NULL;
		link *t2 = NULL;
		t1 = h;
		t2 = b.h;
		list res;
		while ((t1 != NULL) && (t2 != NULL))
		{
			if (t1->k < t2->k)
			{
				res.insf(t1->k);
				t1 = t1->n;
				continue;
			}
			if (t1->k == t2->k)
			{
				koef r;
				r = t1->k;
				r.seta(t1->k.a - t2->k.a);
				if (r.a == 0)
				{
					t1 = t1->n;
					t2 = t2->n;
					continue;
				}
				res.insf(r);
				t1 = t1->n;
				t2 = t2->n;
				continue;
			}
			if (t1->k > t2->k)
			{
				res.insf(t2->k);
				t2 = t2->n;
			}
		}
		while (t1 != NULL)
		{
			res.insf(t1->k);
			t1 = t1->n;
		}
		while (t2 != NULL)
		{
			res.insf(t2->k);
			t2 = t2->n;
		}
		return res;
	}
	list& operator*(const list &b)
	{
		link *t1 = NULL;
		link *t2 = NULL;
		t1 = h;
		t2 = b.h;
		list res;
		while (t1 != NULL) // �������� �� ������� ������ � ������ ��������, ����������� � ��������� ����� ��������
		{
			while (t2 != NULL)
			{
				res.ins(t1->k*t2->k);
				t2 = t2->n;
			}
			t2 = b.h;
			t1 = t1->n;
		}
		return res;
	}
	void mul(double b) // �������� �� ����� (��� ����� �����)
	{
		link *p = new link;
		p = h;
		while (p != NULL)
		{
			p->k.a = p->k.a*b;
			p = p->n;
		}
	}
	friend ostream& operator<<(ostream &out, const list &l)
	{
		link *t = new link;
		t = l.h;
		out << t->k.a << "*(X^" << (t->k.st)/400 << "*Y^" << (t->k.st)%400/20 << "*Z^" << (t->k.st)%20 << ")";
		if (t->n == NULL)return out;
		while (t->n != NULL)
		{
			t = t->n;
			if (t->k.a > 0)out << " + ";
			else out << " - ";
			out << abs(t->k.a) << "*(X^" << (t->k.st) / 400 << "*Y^" << (t->k.st) % 400 / 20 << "*Z^" << (t->k.st) % 20 << ")";
		}
		return out;
	}
};