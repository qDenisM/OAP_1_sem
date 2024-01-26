#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double h, x, s1 = 0, s2 = 0, a = 2, b = 7, n = 200, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (int i = 1; i < n; i++)
	{
		s2 += (pow(sin(x), 2) + 1);
		x += h;
		s1 += (pow(sin(x), 2) + 1);
		x += h;
	}
	z = (h / 3) * ((pow(sin(a), 2) + 1) + 4 * (pow(sin(a + h), 2) + 1) + 4 * s1 + 2 * s2 + (pow(sin(b), 2) + 1));
	cout << "z = " << z;
	return 0;
}