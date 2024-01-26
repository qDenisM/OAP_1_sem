#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x, a = -1, b = -2;
	do {
		x = (a + b) / 2;
		if (((sin(x) + 2 + x) * (sin(a) + 2 + a)) <= 0)
			b = x;
		else
			a = x;
	} while (abs(a - b) > (2 * e));
	cout << "x = " << x;
	return 0;
}