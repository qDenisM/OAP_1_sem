#include <iostream>
void main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    int b = 14, n = 200, i;
    double a = 8, h, x, s1 = 0, s2 = 0, z;
    h = (b - a) / (2 * n);
    x = a + 2 * h;
    for (i = 1; i < n; i++)
    {
        s2 += 2 + pow(x, 3);
        x += h;
        s1 += 2 + pow(x, 3);
        x += h;
    }
    z = (2 + pow(a, 3) + 4 * (2 + pow(a + h, 3)) + 4 * s1 + 2 * s2 + 2 + pow(b, 3)) * h / 3;
    cout << "z = " << z << endl;
}