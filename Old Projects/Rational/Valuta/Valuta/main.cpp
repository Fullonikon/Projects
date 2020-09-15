#include "val.h"

void main()
{
	Val st1, st2, st3;
	st1.rinit(100);
	st2.dinit(100);
	st3 = st1.plus(st2);
	st3.rshow();
	st3.dshow();
	return;
}