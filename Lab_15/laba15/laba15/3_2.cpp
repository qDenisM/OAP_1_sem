#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

void removeLetterB(char* text) {
    char* readPtr = text;
    char* writePtr = text;

    while (*readPtr) {
        if (*readPtr != 'b' && *readPtr != 'B') {
            *writePtr = *readPtr;
            writePtr++;
        }
        readPtr++;
    }
    *writePtr = '\0';
}

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int maxLength = 1000;
    char text[maxLength];

    cout << "Введите текст: ";
    cin.getline(text, maxLength);

    removeLetterB(text);

    cout << "Текст после удаления букв 'b': " << text << endl;

    return 0;
}
