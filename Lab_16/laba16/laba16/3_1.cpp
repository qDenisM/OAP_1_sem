#include <iostream>
using namespace std;

// ������� ��� ����� ��������� �������
void inputMatrix(int**& A, int& rows, int& columns) {
    cout << "������� �������� �������:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }
}

// ������� ��� ������ ��������� �������
void displayMatrix(int**& A, int& rows, int& columns) {
    cout << "�������:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// ������� ��� ������ ����� ��������� � ������ � �������������� ����������
int findPositiveRowSum(int**& A, int& rows, int& columns) {
    for (int i = 0; i < rows; i++) {
        bool allPositive = true;
        int rowSum = 0;

        for (int j = 0; j < columns; j++) {
            if (A[i][j] <= 0) {
                allPositive = false;
                break;
            }
            rowSum += A[i][j];
        }

        if (allPositive) {
            for (int j = 0; j < columns; j++) {
                A[i][j] -= rowSum;
            }
            return rowSum;
        }
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "ru");
    int rows, columns;

    cout << "������� ������� ������� (������ �������): ";
    cin >> rows >> columns;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
    }

    inputMatrix(matrix, rows, columns);

    displayMatrix(matrix, rows, columns);

    int sum = findPositiveRowSum(matrix, rows, columns);

    if (sum > 0) {
        cout << "\n����� ��������� � ������ ������ � �������������� ����������: " << sum << endl;

        cout << "\n������� ����� ���������� �� ����� ��������� ������ ������:\n";
        displayMatrix(matrix, rows, columns);
    }
    else {
        cout << "\n�� ������� ������ � �������������� ����������.\n";
    }

    // ������������ ������
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
