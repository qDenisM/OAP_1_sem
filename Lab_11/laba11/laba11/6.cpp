#include<iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    const int N = 100;
    int sA, sB, A[N], B[N];
    int* pA = A;
    int* pB = B;
    
    cout << "Введите размер массива A: ";
    cin >> sA;
    cout << "Введите размер массива В: ";
    cin >> sB;
    
    if (sA > 100 || sB > 100) {
        cout << "Введены некорректные данные";
    }
    else {
        for (int i = 0; i < sA; i++) {
            cout << "Введите значение элемента " << i << " массива А: ";
            cin >> A[i];
        }
        
        for (int i = 0; i < sB; i++) {
            cout << "Введите значение элемента " << i << " массива B: ";
            cin >> B[i];
        }
        cout << "Массив A: ";
        for (int i = 0; i < sA; i++) {
            cout << *(pA + i) << ' ';
        }
        cout << endl;
        cout << "Массив B: ";
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
            cout << "Является" << endl;
        }
        else if (k != 0 && n == 0) {
            cout << "Не является" << endl;
        }
    }
    
    return 0;
}