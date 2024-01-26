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
        for (int j = 0; j < N; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Введите целое число m: ";
    cin >> m;

    if (m >= 1 && m <= N) {
        m--;

        for (int i = 0; i < N; ++i) {
            int temp = A[i][m];
            A[i][m] = A[m][i];
            A[m][i] = temp;
        }

        cout << "Преобразованная матрица:\n";
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Некорректное значение m\n";
    }

    return 0;
}
