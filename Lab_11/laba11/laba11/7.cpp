#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	const int N = 100;
	int sz, A[N], k = 0;

	int* pA = A;
	int* pk = &k;

	cout << "������� ������ �������� A � B: ";
	cin >> sz;

	if (sz > 100) {
		cout << "������� ������������ ������";
	}
	else {
		for (int i = 0; i < sz; i++) {
			cout << "������� �������� �������� " << i << " ������� �: ";
			cin >> A[i];
		}
		cout << "������ A: ";
		for (int i = 0; i < sz; i++) {
			cout << *(pA + i) << ' ';
		}
		cout << endl;
		cout << "������� ����� k = ";
		cin >> *pk;

		for (int i = 0; i < sz; i++) {
			if (*(pA + i) == *(pk)) {
				cout << i + 1 << " �����: " << *(pA + i) << ". ����� = k\n";
			}
			if (*(pA + i) > *(pk)) {
				cout << i + 1 << " �����: " << *(pA + i) << ". ����� > k\n";
			}
			if (*(pA + i) < *(pk)) {
				cout << i + 1 << " �����: " << *(pA + i) << ". ����� < k\n";
			}
		}
	}
	return 0;
}