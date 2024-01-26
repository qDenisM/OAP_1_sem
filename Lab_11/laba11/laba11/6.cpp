#include<iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    const int N = 100;
    int sA, sB, A[N], B[N];
    int* pA = A;
    int* pB = B;
    
    cout << "������� ������ ������� A: ";
    cin >> sA;
    cout << "������� ������ ������� �: ";
    cin >> sB;
    
    if (sA > 100 || sB > 100) {
        cout << "������� ������������ ������";
    }
    else {
        for (int i = 0; i < sA; i++) {
            cout << "������� �������� �������� " << i << " ������� �: ";
            cin >> A[i];
        }
        
        for (int i = 0; i < sB; i++) {
            cout << "������� �������� �������� " << i << " ������� B: ";
            cin >> B[i];
        }
        cout << "������ A: ";
        for (int i = 0; i < sA; i++) {
            cout << *(pA + i) << ' ';
        }
        cout << endl;
        cout << "������ B: ";
        for (int i = 0; i < sB; i++) {
            cout << *(pB + i) << ' ';
        }
        cout << endl;

        int n = sA;
        int k = sB;

        while (n > 0 && k > 0) {
            if (A[n - 1] == B[k - 1]) {
                n--;
                k--;
            }
            else {
                n--;
            }
        }

        if (k == 0) {
            cout << "��������" << endl;
        }
        else if (k != 0 && n == 0) {
            cout << "�� ��������" << endl;
        }
    }
    
    return 0;
}