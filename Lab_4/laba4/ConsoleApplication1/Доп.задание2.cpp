#include <iostream> // ����� �� ��� ������� r ������ ����� ������������� ��������� � ����������� p � q?
#define _USE_MATH_DEFINES 
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	float r, p, q, pi;
	pi = atan(1) * 4;
	cout << "������� ������ ����: ";
	cin >> r;
	cout << "������� ��������� �������������� ���������: ";
	cin >> p >> q;
	if (r > 0, p > 0, q > 0) {
		if ((p * q) / 2 > pi * pow(r, 2)) {
			cout << "��� ������� ����� ������ ���������" << endl;
		}

		else {
			cout << "��� �� ������� ����� ������ ���������" << endl;
		}
	}
	else {
		cout << "������� �������� ������" << endl;
	}
	return 0;
}