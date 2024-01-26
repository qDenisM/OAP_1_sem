#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int** A;
    int N;
    int M;

    cout << "Введите размер матрицы A: ";
    cin >> N;
    cin >> M;

    A = new int* [N];
    for (int i = 0; i < N; ++i) {
        A[i] = new int[M];
    }

    cout << "Введите элементы матрицы A(N, M):\n";
    for (int i = 0; i < N; ++i) {
        cout << "Введите элементы для строки " << i + 1 << ":\n";
        for (int j = 0; j < M; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    bool found = false;
    int rowNum = -1;

    for (int i = 0; i < N; ++i) {
        bool hasPositive = false;
        for (int j = 0; j < M; ++j) {
            if (A[i][j] > 0) {
                hasPositive = true;
                found = true;
                rowNum = i + 1;
                break;
            }
        }

        if (hasPositive) {
            break;
        }
    }

    if (found) {
        cout << "Строка с положительным элементом найдена: " << rowNum << endl;

        if (rowNum > 1) {
            int prevRow = rowNum - 2;

            cout << "Изменение знаков элементов строки " << prevRow + 1 << ": ";
            for (int j = 0; j < M; ++j) {
                A[prevRow][j] *= -1;
                cout << A[prevRow][j] << " ";
            }
        }
    }
    else {
        cout << "В матрице нет строки с положительным элементом\n";
    }

    free(A);

    return 0;
}
