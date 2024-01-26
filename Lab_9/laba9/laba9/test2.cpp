#include <iostream>
void main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    double h, x, s = 0, a = 8, b = 14, n = 200;
    h = (b - a) / n;
    x = a;
    for (x; x < (b - h); x += h)
    {
        s = s + h * (2 + pow(x, 3) + 2 + pow(x + h, 3)) / 2;
    }
    cout << "s = " << s << endl;
}