#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	const int N = 100;
	int i, sz, T[N];
	int m;
	double avg = 0;
	cout << "������� ������ �������: ";
	cin >> sz;
	cout << "������� ����������� �������: ";
	cin >> m;
	if (sz > 100)
		cout << "������� ������������ ������" << endl;
	else {
		cout << "������ T: " << endl;
		srand((unsigned)time(NULL));
		for (i = 0; i < sz; i++)
		{
			T[i] = rand() % m;
			cout << T[i] << ' ';
		}
		cout << endl;
		for ( i = sz - 1; i >= sz - 3; i--)
		{
			avg += T[i];
		}
		avg = avg / 3;
		for (i = 0; i < sz; i++)
		{
			if (T[i] == avg) {
				cout << "��� ������ �����: " << i << endl;
				break;
			}
		}
	}
	return 0;
}