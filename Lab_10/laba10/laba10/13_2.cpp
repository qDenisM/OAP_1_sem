#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");

	int A, p, n;
	int result;
	char tmp[33];

	cout << "¬ведите число: ";
	cin >> A;

	_itoa_s(A, tmp, 2);

	cout << "„исло в двоичном виде: " << tmp << endl;

	cout << "¬ведите p: ";
	cin >> p;

	cout << "¬ведите n: ";
	cin >> n;
	
	if (n > p) {
		cout << "¬ведены некорректные данные" << endl;
	}
	else {
		int mask = (1 << n) - 1;
		mask <<= (p - n + 1);

		int invertedA = A | mask;

		_itoa_s(invertedA, tmp, 2);

		cout << "„исло после инверсии в двоичным коде: " << tmp << endl;
	}
	return 0;
}