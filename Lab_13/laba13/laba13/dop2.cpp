#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int n;

    cout << "Введите порядок латинского квадрата (n): ";
    cin >> n;

    int** latinSquare = new int* [n];

    for (int i = 0; i < n; i++) {
        latinSquare[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            latinSquare[i][j] = (i + j) % n + 1;
        }
    }

    cout << "Латинский квадрат порядка " << n << ":" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << latinSquare[i][j] << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] latinSquare[i];
    }

    delete[] latinSquare;

    return 0;
}

