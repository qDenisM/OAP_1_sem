#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double h, x, s1 = 0, s2 = 0, a = 4, b = 7, n = 200, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (int i = 1; i < n; i++)
	{
		s2 += (pow(cos(x), 3));
		x += h;
		s1 += (pow(cos(x), 3));
		x += h;
	}
	z = (h / 3) * ((pow(cos(a), 3)) + 4 * (pow(cos(a + h), 3)) + 4 * s1 + 2 * s2 + (pow(cos(b), 3)));
	cout << "z = " << z;
	return 0;
}