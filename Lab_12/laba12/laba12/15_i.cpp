#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string s;
    char c;

    cout << "������� �������� �����������: ";
    getline(cin, s);
    cout << "������� ������, ������� ����� �������: ";
    cin >> c;

    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == c) {
            s.erase(i, 1);
            --i;
        }
    }

    cout << "������ ����� ���������: " << s;
    return 0;
}
