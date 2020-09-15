#include "algorithm.h"
using namespace std;

int main()
{
	char *raw=new char(50);
	double res;
	cout << " Input expresion: ";
	cin >> raw;
	res = analysis(raw);
	cout << " Result: " << res;
	return 0;
}