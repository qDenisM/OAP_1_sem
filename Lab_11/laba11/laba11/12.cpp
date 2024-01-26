#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
 
    int const N = 100;
    int sz;
    int k1 = 0, k2 = 0, k3 = 0;
    
    int A[N];
    int* pA = A;
 
    int B[N];
    int* pB = B;

    cout << "Введите размер массивов A и B: ";
    cin >> sz;
    
    if (sz > 100) {
        cout << "Введены некорректные данные";
    }

    else {
        for (int i = 0; i < sz; i++) {
            cout << "Введите значение массива А элемента " << i << ": ";
            cin >> A[i];
            cout << "Введите значение массива B элемента " << i << ": ";
            cin >> B[i];
        }

        cout << "Массив A: ";
        for (int i = 0; i < sz; i++)
        {
            cout << *(pA + i) << ' ';
        }
        cout << endl;

        cout << "Массив B: ";
        for (int i = 0; i < sz; i++)
        {
            cout << *(pB + i) << ' ';
        }
        cout << endl;

        for (int i = 0; i < sz; i++) {
            if (*(pA + i) == *(pB + i)) {
                k1++;
            }

            if (*(pA + i) > *(pB + i)) {
                k2++;
            }

            if (*(pA + i) < *(pB + i)) {
                k3++;
            }
        }

        cout << "\nКол-во A[k] = B[k]: " << k1 << endl;
        cout << "Кол-во A[k] > B[k]: " << k2 << endl;
        cout << "Кол-во A[k] < B[k]: " << k3 << endl;
    }

    return 0;

}
