#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	const int N = 100;
	int sz;
	int x[N], count = 0;
	int* start = x;

	cout << "������� ������ ������� x: ";
	cin >> sz;

	if (sz > 100) {
		cout << "������� ������������ ������";
	}
	else {
		for (int i = 0; i < sz; i++) {
			cout << "������� �������� �������� ������� x " << i << ": ";
			cin >> x[i];
		}

		cout << "������ x: ";
		for (int i = 0; i < sz; i++) {
			cout << *(start + i) << ' ';
		}
		cout << endl;

		for (int i = 0; i < sz; i++) {
			int a = 0;

			for (int q = 0; q < i; q++) {
				if (*(start + i) == *(start + q)) {
					a = 1;
				}
			}
			if (a == 0) {
				count++;
			}
		}

		cout << "���������� ��������� ����� � ������� : " << count;

	}
	return 0;
}