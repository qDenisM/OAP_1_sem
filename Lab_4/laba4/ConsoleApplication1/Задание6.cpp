#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int qa;

	cout << "��� ��������� ������ ������� �������?: " << endl << "1. ������������" << endl << "2. ���������" << endl << "3. �������� �� �����" << endl << "��� �����: ";
	cin >> qa;

	switch (qa) {
	case 1: cout << "�������� �����" << endl; break;
	case 2: cout << "�������� �����" << endl; break;
	case 3: cout << "������ �����" << endl; break;
	default: cout << "������� ������������ �����" << endl; break;
	}

	cout << "������������ ����� �������������� ������� ������� ���� ������������ �������?" << endl << "1. ���������� �������" << endl << "2. ������� �������" << endl << "3. ����������� �������" << endl << "��� �����: ";
	cin >> qa;

	switch (qa) {
	case 1: cout << "�������� �����"; break;
	case 2: cout << "������ �����"; break;
	case 3: cout << "�������� �����"; break;
	default: cout << "������� ������������ �����"; break;
	}
	return 0;
}