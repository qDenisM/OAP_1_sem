#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int A, B;
	char tmp[33];
	cout << "������� ����� A: ";
	cin >> A;

	cout << "������� ����� B: ";
	cin >> B;

	_itoa_s(A, tmp, 2);

	cout << "����� A � �������� ����: " << tmp << endl;

	_itoa_s(B, tmp, 2);

	cout << "����� B � �������� ����: " << tmp << endl;

	B &= ~0x60;
	B |= A & 0x60;

	_itoa_s(A, tmp, 2);

	cout << "����� A: " << tmp << endl;

	_itoa_s(B, tmp, 2);

	cout << "����� B: " << tmp << endl;

	return 0;
}