#include <iostream>
#include <windows.h>

using namespace std;

char* removeWords(const char* sentence) {
    int sentenceLength = 0;

    while (sentence[sentenceLength] != '\0') {
        sentenceLength++;
    }

    char* result = new char[sentenceLength + 1];
    int resultIndex = 0;

    bool inWord = false;
    int wordCount = 0;

    for (int i = 0; i <= sentenceLength; ++i) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
            if (wordCount % 2 != 0) {
                result[resultIndex++] = sentence[i];
            }
        }
        else {
            if (inWord) {
                inWord = false;
            }
            if (sentence[i] == ' ') {
                result[resultIndex++] = sentence[i];
            }
        }
    }

    result[resultIndex] = '\0';

    return result;
}

int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int maxLength = 1000;
    char inputSentence[maxLength];

    cout << "Введите предложение: ";
    cin.getline(inputSentence, maxLength);



    char* modifiedSentence = removeWords(inputSentence);

    cout << "Исходное предложение: " << inputSentence << endl;
    cout << "Предложение без слов с чётными номерами: " << modifiedSentence << endl;

    delete[] modifiedSentence;

    return 0;
}
