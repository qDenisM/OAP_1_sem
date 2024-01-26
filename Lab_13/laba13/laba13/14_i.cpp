#include <iostream>

using namespace std;



int main() {
    setlocale(LC_ALL, "ru");

    const int MAX = 100;
    
    int A[MAX][MAX], N, m;

    cout << "������� ������ ������� N: ";
    cin >> N;

    cout << "������� �������� ������� A(N, N):\n";
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

    cout << "������� ����� ����� m: ";
    cin >> m;

    if (m >= 1 && m <= N) {
        m--;

        for (int i = 0; i < N; ++i) {
            int temp = A[i][m];
            A[i][m] = A[m][i];
            A[m][i] = temp;
        }

        cout << "��������������� �������:\n";
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "������������ �������� m\n";
    }

    return 0;
}
