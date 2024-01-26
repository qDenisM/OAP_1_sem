#include <iostream>

using namespace std;



int main() {
    setlocale(LC_ALL, "ru");

    const int MAX = 100;
    int n;
    cout << "Введите порядок матрицы n: ";
    cin >> n;

    int matrix[MAX][MAX];

    int num = 1;
    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol) {
        for (int i = startCol; i <= endCol; ++i) {
            matrix[startRow][i] = num++;
        }
        startRow++;

        for (int i = startRow; i <= endRow; ++i) {
            matrix[i][endCol] = num++;
        }
        endCol--;

        for (int i = endCol; i >= startCol; --i) {
            matrix[endRow][i] = num++;
        }
        endRow--;

        for (int i = endRow; i >= startRow; --i) {
            matrix[i][startCol] = num++;
        }
        startCol++;
    }

    cout << "Целочисленная матрица порядка " << n << " со спиральным заполнением:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
