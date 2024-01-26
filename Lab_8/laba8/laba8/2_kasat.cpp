#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x1, x, a = 1, b = 7;
	if (((cos(a) + a - 7) * (-sin(a) + 1)) > 0)
		x1 = a;
	else
		x1 = b;
	do {
		x = x1;
		x1 = x - ((cos(x) + x - 7) / (-sin(x) + 1));
	} while (abs(x1 - x) > e);
	cout << "x1 = " << x1;
	return 0;
}