#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int x, y, n;
    double summa;
    cout << "������� ������ �������: ";
    cin >> x;
    cout << "������� �������� �������: ";
    cin >> y;
    if (y > x)
    {
        n = (y - x + 1) / 2;
        while (x % 2 != 0) {
            x += 1;
        }

        while (y % 2 != 0) {
            y -= 1;
        }
        summa = (n * (x + y)) / 2;
            cout << "����� ������ ������ �����: " << summa << endl;
    }
    else {
        cout << "������� ������������ ��������";
    }
        return 0;
}