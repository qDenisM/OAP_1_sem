#include <iostream>

using namespace std;

int nod(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int x, y, z, gcd_xy, result;
    cout << "������� x: ";
    cin >> x;
    cout << "������� y: ";
    cin >> y;
    cout << "������� z: ";
    cin >> z;
    gcd_xy = nod(x, y);
    result = nod(gcd_xy, z);
    cout << "���: " << result; 

    return 0;
}