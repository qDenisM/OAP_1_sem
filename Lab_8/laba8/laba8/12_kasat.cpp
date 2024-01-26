#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x1, x, a = 0, b = 2;
	if (((exp(a) + 2 * pow(a, 2) - 3) * (exp(a) + 4 * a)) > 0)
		x1 = a;
	else
		x1 = b;
	do {
		x = x1;
		x1 = x - ((exp(x) + 2 * pow(x, 2) - 3) / (exp(x) + 4 * x));
	} while (abs(x1 - x) > e);
	cout << "x1 = " << x1;
	return 0;
}