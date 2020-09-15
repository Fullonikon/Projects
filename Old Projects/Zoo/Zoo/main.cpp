#include "zoo.h"

int main()
{
	try {
		zoo z(10);
		z[1].sit(new wolf);
		z[5].sit(new tig);
		z.showc();
	}
	catch (int er)
	{
		if (er == -1)std::cout << "Already has an animal";
		if (er == -2)std::cout << "Wrong cage index";
	}
	return 0;
}