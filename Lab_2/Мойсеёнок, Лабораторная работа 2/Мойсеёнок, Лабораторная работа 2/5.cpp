#include <iostream>

int main()
{
	double w, v, b = 40, x = 1.1, a = 5e-6;
	w = (a + b) * tan(x) / (x + 1);
	v = 1 / 2 * b - sqrt(w - a * b);
	std::cout << "w = " << w;
	std::cout << "v = " << v;
}