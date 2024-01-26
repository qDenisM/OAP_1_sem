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

    char* ptr = &s[0];

    size_t found = s.find(c);
    
    while (found != string::npos) {
        s.erase(found, 1);
        found = s.find(c);
    }

    cout << "Строка после изменений: " << s;
}
