#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ru");
    int rows, cols;
    cout << "������� ���������� ����� �������: ";
    cin >> rows;
    cout << "������� ���������� �������� �������: ";
    cin >> cols;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "������� �������� �������:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int first = -1;

    for (int i = 0; i < rows; i++) {
        bool all = true;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] >= 0) {
                all = false;
                break;
            }
        }
        if (all) {
            first = i;
            break;
        }
    }

    if (first != -1) {
        int increment = matrix[first][0];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] += increment;
            }
        }

        cout << "������� ����� ����������:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "� ������� ��� �����, ��� �������� ������� ������������." << endl;
    }

    free(matrix);

    return 0;
}