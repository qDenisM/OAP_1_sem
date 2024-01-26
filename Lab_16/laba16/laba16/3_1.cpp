#include <iostream>
using namespace std;

// Функция для ввода элементов матрицы
void inputMatrix(int**& A, int& rows, int& columns) {
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }
}

// Функция для вывода элементов матрицы
void displayMatrix(int**& A, int& rows, int& columns) {
    cout << "Матрица:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// Функция для поиска суммы элементов в строке с положительными элементами
int findPositiveRowSum(int**& A, int& rows, int& columns) {
    for (int i = 0; i < rows; i++) {
        bool allPositive = true;
        int rowSum = 0;

        for (int j = 0; j < columns; j++) {
            if (A[i][j] <= 0) {
                allPositive = false;
                break;
            }
            rowSum += A[i][j];
        }

        if (allPositive) {
            for (int j = 0; j < columns; j++) {
                A[i][j] -= rowSum;
            }
            return rowSum;
        }
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "ru");
    int rows, columns;

    cout << "Введите размеры матрицы (строки столбцы): ";
    cin >> rows >> columns;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
    }

    inputMatrix(matrix, rows, columns);

    displayMatrix(matrix, rows, columns);

    int sum = findPositiveRowSum(matrix, rows, columns);

    if (sum > 0) {
        cout << "\nСумма элементов в первой строке с положительными элементами: " << sum << endl;

        cout << "\nМатрица после уменьшения на сумму элементов первой строки:\n";
        displayMatrix(matrix, rows, columns);
    }
    else {
        cout << "\nНе найдено строки с положительными элементами.\n";
    }

    // Освобождение памяти
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
