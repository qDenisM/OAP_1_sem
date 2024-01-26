#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	int A; char tmp[33];
	int maskA = 0b111111111111100;

	cout << "Введите число: ";
	cin >> A;

	_itoa_s(A, tmp, 2);

	cout << "Число в двоичном виде: " << tmp << endl;

	_itoa_s(A ^ maskA, tmp, 2);

	cout << "Результат инвертирования: " << tmp << endl;

	return 0;
}