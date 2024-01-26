#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x1, x, a = -1, b = -2;
	if (((sin(a) + 2 + a) * (cos(a) + 1)) > 0)
		x1 = a;
	else
		x1 = b;
	do {
		x = x1;
		x1 = x - ((sin(x) + 2 + x) / (cos(x) + 1));
	} while (abs(x1 - x) > e);
	cout << "x1 = " << x1;
	return 0;
}