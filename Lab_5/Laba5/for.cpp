#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    double b = 0.5, m = 8, a = 2.4e-4, j[] = { -1.7, -2.9, -8 }, z, y;
    for (int i = 0; i <= 2; i++) {
        y = (m - b) / (sin(a) - exp(a));
        z = 3 * y + sqrt(a - 4 * j[i] * b);
        cout << "Значение y равно: " << y << endl;
        cout << "Если j равно " << j[i] << ", то z равно: " << z << endl;
    }

    return 0;
}