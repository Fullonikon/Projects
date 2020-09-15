#include "R.h"

void main()
{
	R r1, r2;
	r1.init(2, 3);
	r2.init(5, 6);
	r1 = r1.plus(r2);
	r1.show();
	return;
}