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
    int* pA = &A[0][0];
    int j, i, proiv = 1, sum = 0;

    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    cout << "Введите элементы массива: ";
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> *(pA + i * M + j);
        }

    cout << "Матрица: " << endl;
    for (i = 0; i < n; i++) {
        cout << "\n";
        for (j = 0; j < m; j++)
            cout << *(pA + i * M + j) << "\t";
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (*(pA + i * M + j) < 0 && abs(*(pA + i * M + j)) % 2 == 1) {
                proiv *= *(pA + i * M + j);
                sum += *(pA + i * M + j);
            }
        }
    }
    cout << endl;
    cout << "Сумма нечётных отрицательных элементов матрицы: " << sum << endl;
    cout << "Произведение нечётных отрицательных элементов матрицы: " << proiv << endl;
    return 0;
}