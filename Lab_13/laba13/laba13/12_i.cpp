#include <iostream>
#include <Windows.h>

int main() {
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    const int N = 100;
    const int M = 100;
    int n, m;
    int A[N][M];
    int proiv = 1, sum = 0;

    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "матрица: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << "\t";
        }
    }
      
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] < 0 && abs(A[i][j]) % 2 == 1) {
                proiv *= A[i][j];
                sum += A[i][j];
            }
        }
    }
    cout << endl;
    cout << "Сумма нечётных отрицательных элементов матрицы: " << sum << endl;
    cout << "Произведение нечётных отрицательных элементов матрицы: " << proiv << endl;
    return 0;
}
