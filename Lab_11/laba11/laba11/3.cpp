#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	const int N = 100;
	int sz, A[N], B[N], t;
	int s1 = 0, s2 = 0;

	int* pA = A;
	int* pB = B;


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

		cout << "�������� ������� ������ ���� ������ t = ";
		cin >> t;

		
		for (int i = 0; i < sz; i++)
		{
			if (*(pA + i) < t) 
				s1++;
		}
		for (int i = 0; i < sz; i++)
		{
			if (*(pB + i) < t) 
				s2++;
		}

		if (s1 > s2) {
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
		}
		else {
			cout << "������ B: ";
			for (int i = 0; i < sz; i++) {
				cout << *(pB + i) << ' ';
			}
			cout << endl;

			cout << "������ A: ";
			for (int i = 0; i < sz; i++) {
				cout << *(pA + i) << ' ';
			}
			cout << endl;
		}

	}
	return 0;
}