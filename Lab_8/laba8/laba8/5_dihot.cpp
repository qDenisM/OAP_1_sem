#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x, a = -5, b = -1;
	do {
		x = (a + b) / 2;
		if (((2 - pow(x, 2) + x) * (2 - pow(a, 2) + a)) <= 0)
			b = x;
		else
			a = x;
	} while (abs(a - b) > (2 * e));
	cout << "x = " << x;
	return 0;
}