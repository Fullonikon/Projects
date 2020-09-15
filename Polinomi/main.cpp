#include "list.h"

void main()
{

	try
	{
		list l1, l2, res;
		int op = 0;
		cout << "1. add to 1st polinom \n2. add to 2nd polinom \n3. + \n4. - \n5. * \n6. clear \n-1. exit\n";
		while (op != -1)
		{
			std::cout << "op: ";
			std::cin >> op;
			switch (op)
			{
			case 1: // Добавить в первый
			{
				int s1 = 0, s2 = 0, s3 = 0;
				double a = 0;
				cout << "enter 1st, 2nd, 3rd exponents and multiplier: ";
				cin >> s1 >> s2 >> s3 >> a;
				koef k(s1, s2, s3, a);
				l1.ins(k);
				if (l1.isempty())continue;
				cout << l1 << endl;
				continue;
			}
			case 2: // Добавить во второй
			{
				int s1 = 0, s2 = 0, s3 = 0;
				double a = 0;
				cout << "enter 1st, 2nd, 3rd exponents and multiplier: ";
				cin >> s1 >> s2 >> s3 >> a;
				koef k(s1, s2, s3, a);
				l2.ins(k);
				if (l2.isempty())continue;
				cout << l2 << endl;
				continue;
			}
			case 3: // Сложение 
			{
				if (!l1.isempty())
				{
					list lr;
					lr = l1 + l2;
					if (lr.isempty())
					{
						cout << "result = 0" << endl;
						continue;
					}
					cout << "result = " << lr << endl;
					continue;
				}
				if (!l2.isempty())
				{
					list lr;
					lr = l2 + l1;
					if (lr.isempty())
					{
						cout << "result = 0" << endl;
						continue;
					}
					cout << "result = " << lr << endl;
					continue;
				}
				cout << "result = 0" << endl;
				continue;
			}
			case 4: // Вычитание
			{
				if (!l1.isempty())
				{
					list lr;
					lr = l1 - l2;
					if (lr.isempty())
					{
						cout << "result = 0" << endl;
						continue;
					}
					cout << "result = " << lr << endl;
					continue;
				}
				if (!l2.isempty())
				{
					if (l1.isempty())
					{
						l2.mul(-1);
						cout << l2;
						l2.mul(-1);
						continue;
					}
					list lr;
					lr = l1 - l2;
					if (lr.isempty())
					{
						cout << "result = 0" << endl;
						continue;
					}
					cout << "result = " << lr << endl;
					continue;
				}
				cout << "result = 0" << endl;
				continue;
			}
			case 5: // Умножение
			{
				if (l1.isempty() || l2.isempty())
				{
					cout << "result = 0" << endl;
					continue;
				}
				list lr;
				lr = l1 * l2;
				cout << "result = " << lr << endl;
				continue;
			}
			case 6: // Очистка
			{
				if(!l1.isempty())l1 = l1 - l1;
				if(!l2.isempty())l2 = l2 - l2;
				cout << "complete" << endl;
				continue;
			}
			}
		}
	}
	catch (int a)
	{
		std::cout << a << std::endl; // -1 = переполнение степеней
	}
	return;
}