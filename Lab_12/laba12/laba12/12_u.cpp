#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string str;

    cout << "������� ������: ";
    getline(cin, str);
    cout << "������ �� ����������: " << str << endl;

    char* ptr = &str[0];

    for (size_t i = 0; i < str.length() - 1; i += 2) {
        char temp = *ptr;
        *ptr = *(ptr + 1);
        *(ptr + 1) = temp;
        ptr += 2;
    }

    cout << "������ ����� ����������: " << str << endl;

    return 0;
}
