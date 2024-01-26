#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double h, x, s1 = 0, s2 = 0, a = 8, b = 12, n = 200, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (int i = 1; i < n; i++)
	{
		s2 += (5 - pow(x, 2));
		x += h;
		s1 += (5 - pow(x, 2));
		x += h;
	}
	z = (h / 3) * ((5 - pow(a, 2)) + 4 * (5 - pow(a + h, 2)) + 4 * s1 + 2 * s2 + (5 - pow(b, 2)));
	cout << "z = " << z;
	return 0;
}