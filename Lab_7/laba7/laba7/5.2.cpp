#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double y[] = { 4, -6, 3, -3, 9, 5 }, c = 10.1, z, summa = 0;

    for (int i = 0; i < 6; i++)
    {
        summa += y[i];
    }
    if (summa > c)
        z = pow(sin(c), 2);
    else
        z = pow(cos(c), 2);

    cout << "z = " << z;

    return 0;
}