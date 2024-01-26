#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double h, x, s = 0, a = 5, b = 11, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h)
	{
		s += h * ((exp(x) + 2) + (exp(x + h) + 2)) / 2;
	}
	cout << "s = " << s << endl;
	return 0;
}

