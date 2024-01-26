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

    cout << "Введите заданное предложение: ";
    getline(cin, s);
    cout << "Введите символ, который нужно удалить: ";
    cin >> c;

    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == c) {
            s.erase(i, 1);
            --i;
        }
    }

    cout << "Строка после изменений: " << s;
    return 0;
}
