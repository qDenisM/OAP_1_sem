#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	const int N = 100;
	int A[N], B[N], S[N];
	int* pA = A;
	int* pB = B;
	int* pS = S;
	int sz;


	cout << "Введите размер массивов A и B: ";
	cin >> sz;

	if (sz > 100) {
		cout << "Введены некорректные данные";
	}
	else {
		for (int i = 0; i < sz; i++) {
			cout << "Введите значение элемента " << i << " массива А: ";
			cin >> A[i];
			cout << "Введите значение элемента " << i << " массива B: ";
			cin >> B[i];
		}

		cout << "Массив A: ";
		for (int i = 0; i < sz; i++) {
			cout << *(pA + i) << ' ';
		}
		cout << endl;

		cout << "Массив B: ";
		for (int i = 0; i < sz; i++) {
			cout << *(pB + i) << ' ';
		}
		cout << endl;

		for (int i = 0; i < sz; i++)
		{
			*(pS + i) = *(pA + i) + *(pB + i);
		}

		cout << "Массив S: ";
		for (int i = 0; i < sz; i++) {
			cout << *(pS + i) << ' ';
		}
		cout << endl;
	}

	return 0;
}