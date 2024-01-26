#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double h, x, s = 0, a = 8, b = 12, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h)
	{
		s += h * ((5 - pow(x, 2)) + (5 - pow(x + h, 2))) / 2;
	}
	cout << "s = " << s << endl;
	return 0;
}