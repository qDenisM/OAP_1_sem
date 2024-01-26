#include <iostream>
#include <Windows.h>

using namespace std;

void addExclamationWithIndices(char* str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    char* result = new char[2 * length + 1];
    int resultIndex = 0;

    for (int i = 0; i < length; i++) {
        result[resultIndex++] = str[i];
        
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'а' || str[i] == 'А') {
            result[resultIndex++] = '!';
        }
    }

    result[resultIndex] = '\0';

    char* p = str;
    char* q = result;
    while (*q != '\0') {
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';

    free(result);
}

int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int maxLength = 1000;
    char input[maxLength];

    cout << "Введите строку: ";
    cin.getline(input, maxLength);

    addExclamationWithIndices(input);

    cout << "Результат: " << input << endl;

    return 0;
}
