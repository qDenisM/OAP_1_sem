#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	const int N = 100;
	int A[N], sz;

	int* pA = A;

	cout << "������� ������ ������� A: ";
	cin >> sz;

	if (sz > 100) {
		cout << "������� ������������ ������";
	}
	else {
		for (int i = 0; i < sz; i++) {
			cout << "������� �������� �������� " << i << " ������� �: ";
			cin >> A[i];
		}
		cout << "����������� ������ A: ";

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

		cout << "������ A ����� ���������: ";

		for (int i = 0; i < sz; i++) {
			cout << *(pA + i) << ' ';
		}
		cout << endl;
	}
	return 0;
}