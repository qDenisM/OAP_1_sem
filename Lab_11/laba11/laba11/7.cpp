#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	const int N = 100;
	int sz, A[N], k = 0;

	int* pA = A;
	int* pk = &k;

	cout << "Введите размер массивов A и B: ";
	cin >> sz;

	if (sz > 100) {
		cout << "Введены некорректные данные";
	}
	else {
		for (int i = 0; i < sz; i++) {
			cout << "Введите значение элемента " << i << " массива А: ";
			cin >> A[i];
		}
		cout << "Массив A: ";
		for (int i = 0; i < sz; i++) {
			cout << *(pA + i) << ' ';
		}
		cout << endl;
		cout << "Введите число k = ";
		cin >> *pk;

		for (int i = 0; i < sz; i++) {
			if (*(pA + i) == *(pk)) {
				cout << i + 1 << " номер: " << *(pA + i) << ". Число = k\n";
			}
			if (*(pA + i) > *(pk)) {
				cout << i + 1 << " номер: " << *(pA + i) << ". Число > k\n";
			}
			if (*(pA + i) < *(pk)) {
				cout << i + 1 << " номер: " << *(pA + i) << ". Число < k\n";
			}
		}
	}
	return 0;
}