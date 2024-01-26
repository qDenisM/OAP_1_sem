#include <iostream>
#include <windows.h>

using namespace std;

char* createLastLettersString(const char* text) {
    int length = 0;
    while (text[length] != '\0') {
        ++length;
    }

    char* result = new char[length];
    int resultIndex = 0; 
    bool inWord = false; 

    for (int i = 0; i < length; ++i) {
        if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n') {
            inWord = false;
        }
        else if (!inWord) {
            inWord = true;
            int j = i;
            while (j < length && text[j] != ' ' && text[j] != '\t' && text[j] != '\n') {
                ++j;
            }
            if (j > i) {
                result[resultIndex] = text[j - 1];
                ++resultIndex;
            }
        }
    }
    result[resultIndex] = '\0';

    return result;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    const int maxLength = 1000; 
    char inputText[maxLength];

    cout << "Введите предложение: ";
    cin.getline(inputText, maxLength);

    char* lastLetters = createLastLettersString(inputText);

    cout << "Строка из последних букв слов: " << lastLetters << endl;

    free(lastLetters);

    return 0;
}
