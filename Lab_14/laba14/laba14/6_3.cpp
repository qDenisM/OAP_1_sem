
#include <iostream>

using namespace std;

int massiv() {
    double* A;
    int n;

    cout << "������� ������ �������: ";
    cin >> n;
    A = new double[n];

    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "������ �: ";

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << ' ';
    }

    int minIndex = 0;
    double min = A[0];

    for (int i = 1; i < n; i++) {
        if (abs(A[i]) < abs(min)) {
            min = A[i];
            minIndex = i;
        }
    }

    int sum = 0;
    bool foundNegative = false;

    for (int i = 0; i < n; ++i) {
        if (foundNegative) {
            sum += abs(A[i]);
        }
        else if (A[i] < 0) {
            foundNegative = true;
        }
    }

    cout << "\n����� ������������ ��������: " << minIndex << endl;

    if (!foundNegative) {
        cout << "� ������� ��� ������������� ���������.\n";
    }
    else {
        cout << "����� ������� ��������� ����� ������� ��������������: " << sum << endl;
    }

    free(A);

    return 0;
}

int matrix() {
    int** A;
    int N;

    cout << "������� ������ ���������� ������� A: ";
    cin >> N;

    A = new int* [N];
    for (int i = 0; i < N; ++i) {
        A[i] = new int[N];
    }

    cout << "������� �������� �������:\n";
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

    cout << "������������ ��������� � ������� ��� ������������� ���������: " << product << endl;
    cout << "�������� ����� ���� ��������� ����������: " << maxSumDiagonals << endl;


    free(A);

    return 0;
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int c;
    do
    {
        cout << "�������" << endl;
        cout << "1-���������� ������" << endl;
        cout << "2-������ � ��������" << endl;
        cout << "3-�����" << endl;
        cin >> c;

        switch (c)
        {
        case 1:
            massiv();
            break;
        case 2:
            matrix();
            break;
        case 3:
            break;
        }
    } while (c != 3);

    return 0;
}