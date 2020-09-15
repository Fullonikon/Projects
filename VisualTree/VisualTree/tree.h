#pragma once
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

struct node
{
	string text;
	node *sl = NULL, *cont = NULL, *f = NULL; //следующий, контент, родитель
	int lvl = 0;
};

class tree
{
	node *root;
	node *cur;
	void del(node* t)
	{
		if (t == NULL)
		{
			return;
		}
		del(t->sl);
		del(t->cont);
		delete t;
	}
public:
	tree()																																														
	{
		root = new node;
		cur = root;
		cur->lvl = 1;
	}
	void inssl()
	{
		node *p = new node;
		if (cur->sl == NULL)  // первая ситуация
		{
			cur->sl = p;
			p->f = cur;
			cur->sl->lvl = cur->lvl;
			cur = cur->sl;
		}
		else				  // вторая ситуация
		{
			cur->sl->f = p;
			p->sl = cur->sl;
			cur->sl = p;
			p->f = cur;
			cur->sl->lvl = cur->lvl;
			cur = cur->sl;
		}
		return;
	}
	void inscont()
	{
		node *p = new node;
		if (cur->lvl + 1 > 3)
		{
			// printf("Limit riched");
			return;
		}
		if (cur->cont == NULL)   // первая ситуация
		{
			cur->cont = p;
			p->f = cur;
			cur->cont->lvl = cur->lvl + 1;
			cur = cur->cont;
		}
		else if (cur->cont->lvl < (cur->lvl - 1))  // вторая ситуация
		{
			cur->cont->f = p;
			p->cont = cur->cont;
			cur->cont = p;
			p->f = cur;
			p->lvl = cur->lvl + 1;
			cur = cur->cont;
		}
		else                     // третья ситуация
		{
			cur->cont->f = p;
			p->sl = cur->cont;
			cur->cont = p;
			p->f = cur;
			cur->cont->lvl = cur->lvl + 1;
			cur = cur->cont;
		}
	}
	bool movesl()
	{
		if (cur->sl == NULL)
		{
			// printf("Can't go");
			movecont();
			return false;
		}
		cur = cur->sl;
		return true;
	}
	bool movecont()
	{
		if (cur->cont == NULL)
		{
			// printf("Can't go");
			return false;
		}	// выдать ошибку
		cur = cur->cont;
		return true;
	}
	bool moveup()
	{
		if (cur->f == root)
		{
			// printf("Can't go");
			return false;
		}	// выдать ошибку
		cur = cur->f;
		return true;
	}
	void write(string a)
	{
		cur->text = a;
		return;
	}
	void delcur()
	{
		if (cur->lvl == 1 && cur->sl == NULL)
		{
			//printf("Can't delete this");
			return;
		}
		if (cur->cont != NULL)
		{
			node *t;
			t = cur->cont;
			if (cur->f->lvl > cur->lvl)
			{
				if (cur->sl != NULL)
				{
					cur->f->cont = cur->sl;
					cur->sl->f = cur->f;
					cur->cont->f = cur->sl;
					node *tcur = cur->cont;
					while (tcur->sl != NULL)tcur = tcur->sl;
					cur->sl->cont->f = tcur;
					tcur->sl = cur->sl->cont;
					cur->sl->cont = cur->cont;
					tcur = cur;
					cur = cur->sl;
					delete tcur;
					return;
				}
				cur->f->cont = cur->cont;
				cur->cont->f = cur->f;
				node *t = cur;
				cur = cur->f;
				delete t;
				return;
			}
			if (cur->f->lvl == cur->lvl)
			{
				node *t = cur->f;
				if (t->cont == NULL)
				{
					t->cont = cur->cont;
					t->sl = cur->sl;
					cur->f->sl = cur->sl;
					if (cur->sl != NULL)cur->sl->f = cur->f;
					t = cur;
					cur = cur->f;
					delete t;
					return;
				}
				else
				{
					t = t->cont;
					while (t->sl != NULL)t = t->sl;
					if (t->lvl < cur->cont->lvl)
					{
						t->cont = cur->cont;
					}
					else t->sl = cur->cont;
					cur->f = t;
					t = cur;
					cur = cur->f;
					cur->sl = t->sl;
					if (cur->sl != NULL)cur->sl->f = cur;
					delete t;
					return;
				}
			}
		}
		else
		{
			if (cur->f->lvl > cur->lvl)
			{
				cur->f->cont = cur->sl;
				cur->sl->f = cur->f;
				node *t = cur;
				cur = cur->f;
				delete t;
				return;
			}
			cur->f->sl = cur->sl;
			cur->sl->f = cur->f;
			node *t = cur;
			cur = cur->f;
			delete t;
			return;
		}
	}
	void delcont()
	{
		del(cur->cont);
		cur->cont = NULL;
		return;
	}
	void delsl()
	{
		del(cur->sl);
		cur->sl = NULL;
		return;
	}
	node* getroot()
	{
		return root;
	}
	void out(node *n, string &str)
	{
		if (n == NULL)return;
		if (n != root)
		{
			for (int i = 0; i < n->lvl; i++)
				str = str + '/';
			if (n == cur) str = str + '*';
			str = str + n->text + "\r\n";
		}
		out(n->cont, str);
		out(n->sl, str);
	}
};