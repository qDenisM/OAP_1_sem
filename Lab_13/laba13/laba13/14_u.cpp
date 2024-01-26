#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    const int MAX = 100;

    int A[MAX][MAX], N, m;

    cout << "Введите размер матрицы N: ";
    cin >> N;

    cout << "Введите элементы матрицы A(N, N):\n";
    for (int i = 0; i < N; ++i) {
        int* pRow = A[i];
        for (int j = 0; j < N; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> *(pRow + j);
        }
    }

    for (int i = 0; i < N; ++i) {
        int* pRow = A[i];
        for (int j = 0; j < N; ++j) {
            cout << *(pRow + j) << " ";
        }
        cout << endl;
    }

    cout << "Введите целое число m: ";
    cin >> m;

    if (m >= 1 && m <= N) {
        m--;

        int* pRowM = A[m];

        for (int i = 0; i < N; ++i) {
            int temp = *(A[i] + m);
            *(A[i] + m) = *(pRowM + i);
            *(pRowM + i) = temp;
        }

        cout << "Преобразованная матрица:\n";
        for (int i = 0; i < N; ++i) {
            int* pRow = A[i];
            for (int j = 0; j < N; ++j) {
                cout << *(pRow + j) << " "; 
            }
            cout << endl;
        }
    }
    else {
        cout << "Некорректное значение m\n";
    }

    return 0;
}
