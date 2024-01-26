#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x1, x, a = -1, b = -2;
	if (((pow(a, 3) + 2 * a - 1) * (3 * pow(a, 2) + 2)) > 0)
		x1 = a;
	else
		x1 = b;
	do {
		x = x1;
		x1 = x - ((pow(x, 3) + 2 * x - 1) / (3 * pow(x, 2) + 2));
	} while (abs(x1 - x) > e);
	cout << "x1 = " << x1;
	return 0;
}