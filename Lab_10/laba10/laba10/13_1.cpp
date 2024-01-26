#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int A, B;
	char tmp[33];
	cout << "Введите число A: ";
	cin >> A;

	cout << "Введите число B: ";
	cin >> B;

	_itoa_s(A, tmp, 2);

	cout << "Число A в двоичном виде: " << tmp << endl;

	_itoa_s(B, tmp, 2);

	cout << "Число B в двоичном виде: " << tmp << endl;

	B &= ~0x60;
	B |= A & 0x60;

	_itoa_s(A, tmp, 2);

	cout << "Число A: " << tmp << endl;

	_itoa_s(B, tmp, 2);

	cout << "Число B: " << tmp << endl;

	return 0;
}