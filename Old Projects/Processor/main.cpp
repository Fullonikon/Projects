#include <iostream>

class task
{
	int time, num;
public:
	task()
	{
		time = 0;
		num = 0;
	}
	task(int t)
	{
		time = t;
		num = 0;
	}
	void set(int t, int n)
	{
		time = t;
		num = n;
	}
	int gett()
	{
		return time;
	}
	int getn()
	{
		return num;
	}
	void pr()
	{
		if (time < 0) throw - 4;
		time--;
	}
	void operator=(const task &b)
	{
		time = b.time;
		num = b.num;
	}
};

class que
{
	int top, end, size, n = 0;
	task *qu;
public:
	que(int s)
	{
		top = 0;
		end = s - 1;
		size = s;
		qu = new task[size];
	}
	que(const que &s)
	{
		top = s.top;
		end = s.end;
		size = s.size;
		qu = new task[size];
	}
	bool isfull()
	{
		return (top == ((end + 2) % size));
	}
	bool isempty()
	{
		return (top == ((end + 1) % size));
	}
	void push(int t)
	{
		if (isfull()) throw - 1;
		end = (end + 1) % size;
		n++;
		task a;
		a = qu[end];
		a.set(t, n);
		qu[end] = a;
	}
	task pop()
	{
		if (isempty()) throw - 2;
		task a = qu[top];
		top = (top + 1) % size;
		return a;
	}
};



int main()
{
	try
	{
		que q(10);
		q.push(5); q.push(0); q.push(4); // Входные данные
		int i1 = 0, i2 = 0, ii = 0;
		int p1 = 0, p2 = 0;
		int f = 1;  // Флаг выхода
		task t1, t2;
		while (f == 1)
		{
			if ((q.isempty()) && (t1.gett() == 0) && (t2.gett() == 0))  // Проверка смены флага выхода
			{
				ii--;
				f = 0;
			}
			ii++;
			if (p1 == 0)
			{
				if (q.isempty())continue; // проверка конца задач
				t1 = q.pop();
				if (t1.gett() == 0) // проверка нулевой задачи
				{
					std::cout << "skipped task " << t2.getn() << std::endl;
					continue;
				}
				p1 = 1; // флаг занятости первого процессора
				std::cout << "processor 1: ";
				std::cout << "task" << t1.getn() << " |";
				for (int i = 0; i < t1.gett(); i++) std::cout << "_";
				std::cout << "| --> |";
				t1.pr();
				for (int i = 0; i < t1.gett(); i++) std::cout << "_";
				std::cout << "|" << std::endl;
				p1 = 1;
				if (t1.gett() == 0)p1 = 0; // проверка выполненности задачи и спуск флага
				i1++;
			}
			else if (p1 == 1) // проверка необходимости продолжения
			{
				std::cout << "processor 1: ";
				std::cout << "task" << t1.getn() << " |";
				for (int i = 0; i < t1.gett(); i++) std::cout << "_";
				std::cout << "| --> |";
				t1.pr();
				for (int i = 0; i < t1.gett(); i++) std::cout << "_";
				std::cout << "|" << std::endl;
				if (t1.gett() == 0)p1 = 0;
				i1++;
			}
			if (p2 == 0)
			{
				if (q.isempty())continue;
				std::cout << "processor 2: ";
				t2 = q.pop();
				if (t2.gett() == 0)
				{
					std::cout << "skipped task " << t2.getn() << std::endl;
					continue;
				}
				p2 = 1;
				std::cout << "task" << t2.getn() << " |";
				for (int i = 0; i < t2.gett(); i++) std::cout << "_";
				std::cout << "| --> |";
				t2.pr();
				for (int i = 0; i < t2.gett(); i++) std::cout << "_";
				std::cout << "|" << std::endl;
				p2 = 1;
				if (t2.gett() == 0)p2 = 0;
				i2++;
			}
			else if (p2 == 1)
			{
				std::cout << "processor 2: ";
				std::cout << "task" << t2.getn() << " |";
				for (int i = 0; i < t2.gett(); i++) std::cout << "_";
				std::cout << "| --> |";
				t2.pr();
				for (int i = 0; i < t2.gett(); i++) std::cout << "_";
				std::cout << "|" << std::endl;
				if (t2.gett() == 0)p2 = 0;
				i2++;
			}
		}
		std::cout << "overall tacts = " << ii << std::endl << "1st proc's tacts = " << i1 << std::endl << "2nd proc's tacts = " << i2 << std::endl;
	}
	catch (int a)
	{
		std::cout << "error " << a;
	}
	return 0;
}