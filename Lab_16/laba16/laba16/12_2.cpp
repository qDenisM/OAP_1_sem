#include <iostream>
#include <cstdarg>
using namespace std;

bool hasNegative(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            return true;
        }
    }
    return false;
}

void removeNegatives(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0) {
            arr[j++] = arr[i];
        }
    }
    while (j < n) {
        arr[j++] = 0;
    }
}

void processArray(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i) {
        int n = va_arg(args, int); 
        int* arr = va_arg(args, int*); 

        cout << "�������� ������ " << i + 1 << ": ";
        for (int j = 0; j < n; ++j) {
            cout << arr[j] << " ";
        }
        cout << endl;

        if (hasNegative(arr, n)) {
            removeNegatives(arr, n);

            cout << "������ ����� �������� ������������� ���������: ";
            for (int j = 0; j < n; ++j) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
        else {
            cout << "� ������� ��� ������������� ���������." << endl;
        }
    }

    va_end(args);
}

int main() {
    setlocale(LC_ALL, "ru");
    int n1, n2, n3;

    
    cout << "������� ����������� ������� �������: ";
    cin >> n1;
    int* array1 = new int[n1];
    cout << "������� �������� ������� ������� ����� ������: ";
    for (int i = 0; i < n1; ++i) {
        cin >> array1[i];
    }

    cout << "������� ����������� ������� �������: ";
    cin >> n2;
    int* array2 = new int[n2];
    cout << "������� �������� ������� ������� ����� ������: ";
    for (int i = 0; i < n2; ++i) {
        cin >> array2[i];
    }

    cout << "������� ����������� �������� �������: ";
    cin >> n3;
    int* array3 = new int[n3];
    cout << "������� �������� �������� ������� ����� ������: ";
    for (int i = 0; i < n3; ++i) {
        cin >> array3[i];
    }
    cout << endl;
    cout << "������� ���������� � ����� ����������:" << endl;
    processArray(1, n1, array1);
    cout << endl;
    cout << "������� ���������� � ����� �����������:" << endl;
    processArray(2, n1, array1, n2, array2);
    cout << endl;
    cout << "������� ���������� � ����� �����������:" << endl;
    processArray(3, n1, array1, n2, array2, n3, array3);

    delete[] array1;
    delete[] array2;
    delete[] array3;

    return 0;
}
