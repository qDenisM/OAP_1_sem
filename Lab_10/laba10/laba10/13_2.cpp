#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");

	int A, p, n;
	int result;
	char tmp[33];

	cout << "������� �����: ";
	cin >> A;

	_itoa_s(A, tmp, 2);

	cout << "����� � �������� ����: " << tmp << endl;

	cout << "������� p: ";
	cin >> p;

	cout << "������� n: ";
	cin >> n;
	
	if (n > p) {
		cout << "������� ������������ ������" << endl;
	}
	else {
		int mask = (1 << n) - 1;
		mask <<= (p - n + 1);

		int invertedA = A | mask;

		_itoa_s(invertedA, tmp, 2);

		cout << "����� ����� �������� � �������� ����: " << tmp << endl;
	}
	return 0;
}