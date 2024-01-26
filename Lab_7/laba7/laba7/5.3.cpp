#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double t = 0.45, x[] = { 1.1, 6.2, 3, -4, 6, 1 }, q, summa = 0;

    for (int i = 0; i < 6; i++)
    {
        summa += (x[i] + 1) / x[i];
    }

    q = t + summa;

    cout << "q = " << q;

    return 0;
}