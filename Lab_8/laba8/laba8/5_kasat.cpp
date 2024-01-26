#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x1, x, a = -5, b = -1;
	if (((2 - pow(a, 2) + a) * (-2 * a + 1)) > 0)
		x1 = a;
	else
		x1 = b;
	do {
		x = x1;
		x1 = x - ((2 - pow(x, 2) + x) / (-2 * x + 1));
	} while (abs(x1 - x) > e);
	cout << "x1 = " << x1;
	return 0;
}