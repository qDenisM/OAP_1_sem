#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double h, x, s = 0, a = 4, b = 7, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h)
	{
		s += h * ((pow(cos(x), 3)) + (pow(cos(x + h), 3))) / 2;
	}
	cout << "s = " << s << endl;
	return 0;
}