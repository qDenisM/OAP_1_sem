#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    float j = 2;
    double b = 0.5, m = 8, a = 2.4e-4, z, y;

    while (j < 3.5) {
        y = (m - b) / (sin(a) - exp(a));
        z = 3 * y + sqrt(a - 4 * j * b);
        j += 0.5;
        cout << "Значение y равно: " << y << endl;
        cout << "Если j равно: " << j << ", то z равно: " << z << endl;
    }

    return 0;
}