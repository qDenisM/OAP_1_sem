#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x, a = 1, b = 7;
	do {
		x = (a + b) / 2;
		if (((pow(x, 3) + 2 * x - 1) * (pow(a, 3) + 2 * a - 1)) <= 0)
			b = x;
		else
			a = x;
	} while (abs(a - b) > (2 * e));
	cout << "x = " << x;
	return 0;
}