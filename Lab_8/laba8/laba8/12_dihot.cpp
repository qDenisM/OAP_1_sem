#include <iostream>

using namespace std;

int main()	
{
	setlocale(LC_ALL, "RUS");
	double e = 0.0001, x, a = 0, b = 0.71;
	do {
		x = (a + b) / 2;
		if (((exp(x) + 2 * pow(x, 2) - 3) * (exp(a) + 2 * pow(a, 2) - 3)) <= 0)
			b = x;
		else
			a = x;
	} while (abs(a - b) > (2 * e));
	cout << "x = " << x;
	return 0;
}