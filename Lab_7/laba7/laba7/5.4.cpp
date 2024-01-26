#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double x[] = { 8, -2.3, -8.4, 5.1, 9 }, t = 0.5, summa = 0, y;

    for (int i = 0; i < 5; i++)
    {
        summa += pow(x[i], 2);
    }

    while (t < 3.5) {
        if (t > 2)
            y = summa + t;
        else
            y = cos(pow(t, 2));
        cout << "При t = " << t << " y = " << y << endl;
        t += 0.5;
    }

    return 0;
} 
