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


	cout << "������� ������ �������� A � B: ";
	cin >> sz;

	if (sz > 100) {
		cout << "������� ������������ ������";
	}
	else {
		for (int i = 0; i < sz; i++) {
			cout << "������� �������� �������� " << i << " ������� �: ";
			cin >> A[i];
			cout << "������� �������� �������� " << i << " ������� B: ";
			cin >> B[i];
		}

		cout << "������ A: ";
		for (int i = 0; i < sz; i++) {
			cout << *(pA + i) << ' ';
		}
		cout << endl;

		cout << "������ B: ";
		for (int i = 0; i < sz; i++) {
			cout << *(pB + i) << ' ';
		}
		cout << endl;

		for (int i = 0; i < sz; i++)
		{
			*(pS + i) = *(pA + i) + *(pB + i);
		}

		cout << "������ S: ";
		for (int i = 0; i < sz; i++) {
			cout << *(pS + i) << ' ';
		}
		cout << endl;
	}

	return 0;
}