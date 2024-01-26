#include <iostream> 

int main() {
    setlocale(LC_ALL, "Russian");

    using namespace std;
   
    double* A;
    int n;

    cout << "Введите размер массива: ";
    cin >> n;
    A = new double[n];

    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "Массив А: ";

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

    cout << "\nНомер минимального элемента: " << minIndex << endl;

    if (!foundNegative) {
        cout << "В массиве нет отрицательных элементов.\n";
    }
    else {
        cout << "Сумма модулей элементов после первого отрицательного: " << sum << endl;
    }

    free(A); 

    return 0;
}