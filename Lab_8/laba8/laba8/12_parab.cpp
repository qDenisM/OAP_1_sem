#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double h, x, s1 = 0, s2 = 0, a = 5, b = 11, n = 200, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (int i = 1; i < n; i++)
	{
		s2 += (exp(x) + 2);
		x += h;
		s1 += (exp(x) + 2);
		x += h;
	}
	z = (h / 3) * ((exp(a) + 2) + 4 * (exp(a + h) + 2) + 4 * s1 + 2 * s2 + (exp(b) + 2));
	cout << "z = " << z;
	return 0;
}