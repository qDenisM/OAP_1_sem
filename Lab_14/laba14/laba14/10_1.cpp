#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ru");

    int n;

    cout << "Введите размер массива: ";
    cin >> n;

    double* arr = new double[n];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double sumResult = 0.0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sumResult += arr[i];
        }
    }
    
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
    }

    cout << "Сумма положительных элементов: " << sumResult << endl;
    cout << "Произведение элементов между минимальным и максимальным: " << productResult << endl;

    free(arr);

    return 0;
}