#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    int n;
    cout << "������� ������ �������: ";
    cin >> x;
    cout << "������� �������� �������: ";
    cin >> y;
    if (y > x)
    {
        n = y - x - 1;
        n = trunc(n);
        cout << "���-�� ��������� ������� ����� ������ � �������� ����������: " << n;
    }
    else
        cout << "������� ������������ ��������";
    return 0;
}