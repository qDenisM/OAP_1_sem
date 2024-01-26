#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double h, x, s = 0, a = 2, b = 7, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h)
	{
		s += h * ((pow(sin(x), 2) + 1) + (pow(sin(x + h), 2) + 1)) / 2;
	}
	cout << "s = " << s << endl;
	return 0;
}