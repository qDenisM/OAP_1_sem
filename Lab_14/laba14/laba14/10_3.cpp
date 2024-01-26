
# include <iostream>
using namespace std;
int massiv() {
    int n;

    cout << "������� ������ �������: ";
    cin >> n;

    double* arr = new double[n];

    cout << "������� �������� �������:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double sumResult = 0.0;
    

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) < abs(arr[minIndex])) {
            minIndex = i;
        }
        if (abs(arr[i]) > abs(arr[maxIndex])) {
            maxIndex = i;
        }
    }

    double productResult = 1.0;
    
    if (minIndex == maxIndex) {
        productResult = arr[minIndex];
    }

    int startIndex;
    int endIndex;

    if (minIndex < maxIndex) {
        startIndex = minIndex;
    }
    else {
        startIndex = maxIndex;
    }

    if (minIndex > maxIndex) {
        endIndex = minIndex;
    }
    else {
        endIndex = maxIndex;
    }

    for (int i = startIndex + 1; i < endIndex; i++) {
        productResult *= arr[i];
        if (arr[i] > 0) {
            sumResult += arr[i];
        }
    }

    cout << "����� ������������� ��������� ����� ����������� � ������������: " << sumResult << endl;
    cout << "������������ ��������� ����� ����������� � ������������: " << productResult << endl;

    free(arr);

    return 0;
}

int matrix() {
    int rows, cols;
    cout << "���������� �����: ";
    cin >> rows;
    cout << "���������� ��������: ";
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

    cout << "��������� ������: ";
    for (int i = 0; i < cols; i++) {
        cout << matrix[first][i] << ' ';
    }
    cout << endl;

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