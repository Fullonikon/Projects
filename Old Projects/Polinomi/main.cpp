#include "list.h"
#include <cstdlib>
#include <stdio.h>

void main()
{
	try
	{
		list l1, l2, res;
		int op = 0;
		cout << "1. add to 1st polinom \n2. add to 2nd polinom \n3. + \n4. - \n5. * \n6. clear \n-1. exit\n";
		while (op != -1)
		{
			cout << "op: ";
			cin >> op;
			switch (op)
			{
			case 1: // Добавить в первый
			{
				char arr[100];
				cout << "enter polinomial: ";
				cin >> arr;
				string p = string(arr);
				if (p[0] != '-')p = "+" + p;
				int i = 0;
				while (p[i] != '\0')
				{
					int s1 = 0, s2 = 0, s3 = 0;
					double a = 0;
					int f = 0, f1 = 0;
					string ta = "";
					if (p[i] == '+')
					{
						while ((p[i] != '\0') && (p[i] != '-') && (f1 == 0))
						{
							ta += p[i];
							i++;
							if (p[i] == 'x')
							{
								i += 2;
								string ts1 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts1 += p[i];
									i++;
								}
								s1 = atoi(ts1.c_str());
							}
							if (p[i] == 'y')
							{
								i += 2;
								string ts2 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts2 += p[i];
									i++;
								}
								s2 = atoi(ts2.c_str());
							}
							if (p[i] == 'z')
							{
								i += 2;
								string ts3 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts3 += p[i];
									i++;
								}
								s3 = atoi(ts3.c_str());
							}
							if (p[i] == '+')f1 = 1;
						}
						if (ta == "+") a = 1;
						else a = atoi(ta.c_str());
						koef k(s1, s2, s3, a);
						l1.ins(k);
						f = 1;
					}
					if ((p[i] == '-') && (f == 0))
					{
						while ((p[i] != '\0') && (p[i] != '+')&& (f1 == 0))
						{
							ta += p[i];
							i++;
							if (p[i] == 'x')
							{
								i += 2;
								string ts1 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts1 += p[i];
									i++;
								}
								s1 = atoi(ts1.c_str());
							}
							if (p[i] == 'y')
							{
								i += 2;
								string ts2 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts2 += p[i];
									i++;
								}
								s2 = atoi(ts2.c_str());
							}
							if (p[i] == 'z')
							{
								i += 2;
								string ts3 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts3 += p[i];
									i++;
								}
								s3 = atoi(ts3.c_str());
							}
							if (p[i] == '-')f1 = 1;
						}
					if (ta == "-") a = -1;
					else a = atoi(ta.c_str());
					koef k(s1, s2, s3, a);
					l1.ins(k);
					f = 1;
					}
				}
				if (l1.isempty())continue;
				cout << l1 << endl;
				continue;
			}
			case 2: // Добавить во второй
			{
				char arr[100];
				cout << "enter polinomial: ";
				cin >> arr;
				string p = string(arr);
				if (p[0] != '-')p = "+" + p;
				int i = 0;
				while (p[i] != '\0')
				{
					int s1 = 0, s2 = 0, s3 = 0;
					double a = 0;
					int f = 0, f1 = 0;
					string ta = "";
					if (p[i] == '+')
					{
						while ((p[i] != '\0') && (p[i] != '-') && (f1 == 0))
						{
							ta += p[i];
							i++;
							if (p[i] == 'x')
							{
								i += 2;
								string ts1 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts1 += p[i];
									i++;
								}
								s1 = atoi(ts1.c_str());
							}
							if (p[i] == 'y')
							{
								i += 2;
								string ts2 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts2 += p[i];
									i++;
								}
								s2 = atoi(ts2.c_str());
							}
							if (p[i] == 'z')
							{
								i += 2;
								string ts3 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts3 += p[i];
									i++;
								}
								s3 = atoi(ts3.c_str());
							}
							if (p[i] == '+')f1 = 1;
						}
						if (ta == "+") a = 1;
						else a = atoi(ta.c_str());
						koef k(s1, s2, s3, a);
						l2.ins(k);
						f = 1;
					}
					if ((p[i] == '-') && (f == 0))
					{
						while ((p[i] != '\0') && (p[i] != '+') && (f1 == 0))
						{
							ta += p[i];
							i++;
							if (p[i] == 'x')
							{
								i += 2;
								string ts1 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts1 += p[i];
									i++;
								}
								s1 = atoi(ts1.c_str());
							}
							if (p[i] == 'y')
							{
								i += 2;
								string ts2 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts2 += p[i];
									i++;
								}
								s2 = atoi(ts2.c_str());
							}
							if (p[i] == 'z')
							{
								i += 2;
								string ts3 = "";
								while ((p[i] <= '9') && (p[i] >= '0'))
								{
									ts3 += p[i];
									i++;
								}
								s3 = atoi(ts3.c_str());
							}
							if (p[i] == '-')f1 = 1;
						}
						if (ta == "-") a = -1;
						else a = atoi(ta.c_str());
						koef k(s1, s2, s3, a);
						l2.ins(k);
						f = 1;
					}
				}
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