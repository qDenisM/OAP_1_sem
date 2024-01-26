#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double f = -125e-6, y = 1.7, t = 1, c, d;
    while (t < 2.1) {
        c = 2 * sin(f / 2) + log(t);
        if (c >= 3) {
            d = y * exp(-2 * t) + f;
        }
        else {
            d = y - pow(y, 3);
        }
        cout << "При t = " << t << " значение с = " << c << ", значение d = " << d << endl;
        t += 0.1;
    }
    return 0;
}