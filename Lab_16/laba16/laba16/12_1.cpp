#include <iostream>

using namespace std;

bool hasNegativeElement(double**matrix, int rows, int columns, int& rowNumber) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (matrix[i][j] < 0) {
                rowNumber = i;
                return true;
            }
        }
    }
    return false;
}

void halveColumn(double **matrix, int rows, int column) {
    for (int i = 0; i < rows; ++i) {
        matrix[i][column] /= 2.0;
    }
}

int main() {
    setlocale(LC_ALL, "ru");

    int rows, columns;

    cout << "Введите количество строк: ";
    cin >> rows;

    cout << "Введите количество колонок: ";
    cin >> columns;

    double **matrix = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new double[columns];
    }

    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout << "Матрица: ";
    for (int i = 0; i < rows; ++i) {
        cout << endl;
        for (int j = 0; j < columns; ++j) {
            cout << matrix[i][j] << ' ';
        }
    }
    
    cout << endl;

    int rowNumber;
    if (hasNegativeElement(matrix, rows, columns, rowNumber)) {
        cout << "Строка матрицы с отрицательным элементом под номером " << rowNumber + 1 << ".\n";
        halveColumn(matrix, rows, rowNumber);
       
        cout << "Измененная матрица:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else {
        cout << "В матрице нету отрицательных элементов.\n";
    }

    free(matrix);

    return 0;
}
