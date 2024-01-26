#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_CTYPE, "Russian");
    double x, y, z, min, max, t;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z;
        if ((x + y + z) / 2 > x * y * z) {
            min = x * y * z;
        }

        else {
            min = (x + y + z) / 2;
        }

        cout << "Минимальное значение равно: " << min << endl;

        if (x * y > y) {
            max = x * y;
     }
        else {
            max = y;
        }

        cout << "Максимальное значение равно: " << max << endl;
        t = max + min;
        cout << "Значение t равно: " << t << endl;

        return 0;
}

