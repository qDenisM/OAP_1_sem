#include <iostream> 

int main() {
    setlocale(LC_ALL, "Russian");

    using namespace std;
   
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