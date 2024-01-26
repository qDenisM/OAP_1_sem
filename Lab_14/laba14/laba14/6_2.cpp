#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int** A;
    int N;

    cout << "Введите размер квадратной матрицы A: ";
    cin >> N;

    A = new int* [N];
    for (int i = 0; i < N; ++i) {
        A[i] = new int[N];
    }

    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }

    int product = 1;

    for (int i = 0; i < N; ++i) {
        bool hasNegative = false;
        for (int j = 0; j < N; ++j) {
            if (A[i][j] < 0) {
                hasNegative = true;
                break;
            }
        }

        if (!hasNegative) {
            for (int j = 0; j < N; ++j) {
                product *= A[i][j];
            }
        }
    }

    int maxSumDiagonals = INT_MIN;

    for (int k = 1 - N; k < N; ++k) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            int j = i + k;
            if (j >= 0 && j < N) {
                sum += A[i][j];
            }
        }
        if (sum > maxSumDiagonals) {
            maxSumDiagonals = sum;
        }
    }

    cout << "Произведение элементов в строках без отрицательных элементов: " << product << endl;
    cout << "Максимум среди сумм элементов диагоналей: " << maxSumDiagonals << endl;

    free(A);

    return 0;
}
