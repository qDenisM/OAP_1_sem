#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	const int N = 100;
	int A[N], sz;

	int* pA = A;

	cout << "Введите размер массива A: ";
	cin >> sz;

	if (sz > 100) {
		cout << "Введены некорректные данные";
	}
	else {
		for (int i = 0; i < sz; i++) {
			cout << "Введите значение элемента " << i << " массива А: ";
			cin >> A[i];
		}
		cout << "Изначальный массив A: ";

		for (int i = 0; i < sz; i++) {
			cout << *(pA + i) << ' ';
		}
		cout << endl;

		for (int i = 0; i <= sz; i++) {
			for (int j = 0; j < sz; j++) {
				if (*(pA + j) < *(pA + j + 1)) {
					int foo = *(pA + j);
					*(pA + j) = *(pA + j + 1);
					*(pA + j + 1) = foo;
				}
			}
		}

		cout << "Массив A после изменений: ";

		for (int i = 0; i < sz; i++) {
			cout << *(pA + i) << ' ';
		}
		cout << endl;
	}
	return 0;
}