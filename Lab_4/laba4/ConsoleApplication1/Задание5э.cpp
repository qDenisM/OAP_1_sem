#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	float x, ei, km, sm, mm;
	cout << "������� �������� x: ";
	cin >> x;
	if (x > 0) {
		cout << "������� ������� ��������� (�������� - 1, ���� - 2, ��������� - 3, ��������� - 4): ";
		cin >> ei;
		if (ei == 1)
		{
			km = x * 1000;
			cout << "�������� � ������ �����: " << km << endl;
			return 0;
		}

		else if (ei == 2)
		{
			cout << "�������� � ������ �����: " << x << endl;
			return 0;
		}

		else if (ei == 3)
		{
			sm = x / 100;
			cout << "�������� � ������ �����: " << sm << endl;
			return 0;
		}

		else if (ei == 4)
		{
			mm = x / 1000;
			cout << "�������� � ������ �����: " << mm << endl;
			return 0;
		}

		else {
			cout << "������� ������������ ������� ���������" << endl;
			return 0;
		}

	}
	else {
		cout << "������� ������������ ��������"
	}
}