#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double y[] = { 3, -2, 0.9, 0.5, 1 }, p = y[0], q, n, proizv = 1;

    cout << "Введите n = ";
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        if (y[i] < p)
            p = y[i];
    }
    if (n > 5 || n < 0)
        cout << "Введено неверное значение n";
    else {
        for (int i = 0; i < n; i++)
        {
            proizv *= y[i] - 5;
        }

        q = proizv + p;

        cout << "Минимальное значение p = " << p << endl;
        cout << "q = " << q << endl;
    }
    return 0;
}