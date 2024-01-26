#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    int n;
    cout << "Введите первый элемент: ";
    cin >> x;
    cout << "Введите конечный элемент: ";
    cin >> y;
    if (y > x)
    {
        n = y - x - 1;
        n = trunc(n);
        cout << "Кол-во элементов стоящих между первым и конечным значениями: " << n;
    }
    else
        cout << "Введены некорректные значения";
    return 0;
}