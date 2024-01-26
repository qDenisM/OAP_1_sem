#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double x[] = { 1, 2.7, 4.7, 6, 10 }, z = x[0], y, summa = 0;
    for (int i = 0; i < 5; i++)
    {
        if (z < x[i])
        {
            z = x[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        summa += pow(x[i], 2);
    }

    y = z * summa;
    
    cout << "Максимальное значение: " << z << endl;
    cout << "y = " << y << endl;
    return 0;
}