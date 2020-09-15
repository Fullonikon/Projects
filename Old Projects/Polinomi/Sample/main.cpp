#include "../koef.h"
#include "../list.h"

int main()
{
	koef a1(1, 2, 3, 4), a2(5, 6, 7, 8), a3(2, 2, 2, -1), a4(4, 4, 4, -5), a5(1, 1, 1, 14), a6(1, 1, 1, 16);
	list a, b, c;
	a.ins(a1); a.ins(a2); a.ins(a5);
	b.ins(a3); b.ins(a4); b.ins(a6);
	cout << "1st polinom: " << a << endl << "2nd plinom: " << b << endl;
	c = a + b;
	cout << "a + b = " << c << endl;
	c = a - b;
	cout << "a - b = " << c << endl;
	c = a * b;
	cout << "a * b = " << c << endl;
	return 0;
}