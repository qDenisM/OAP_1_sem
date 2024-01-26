#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    const int SIZE = 6;
    int matrix[SIZE][SIZE];
    int sum = 0;

    cout << "Введите элементы матрицы " << SIZE << "x" << SIZE << ":\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Введите элементы строки " << i + 1 << " (через пробел): ";
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        bool hasNegative = false;
        for (int j = 0; j < SIZE; ++j) {
            if (matrix[i][j] < 0) {
                hasNegative = true;
                break;
            }
        }
        if (hasNegative) {
            for (int j = 0; j < SIZE; ++j) {
                sum += matrix[i][j];
            }
        }
    }

    bool hasMatching = false;
    for (int i = 0; i < SIZE; ++i) {
        bool match = true;
        for (int j = 0; j < SIZE; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                match = false;
                break;
            }
        }
        if (match) {
            hasMatching = true;
            break;
        }
    }

    if (hasMatching) {
        cout << "\nЕсть значения, где k-я строка совпадает с k-м столбцом.\n";
    }
    else {
        cout << "\nНет значений, где k-я строка совпадает с k-м столбцом.\n";
    }

    cout << "Сумма элементов в строках с отрицательными элементами: " << sum << endl;

    return 0;
}
