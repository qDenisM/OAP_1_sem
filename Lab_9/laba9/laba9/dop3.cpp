#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int N = 100;
	int sz, T[N], counter = 0;
	cout << "������� ������ �������" << endl;
	cin >> sz;
	if (sz > 100)
		cout << "������� �������� ������" << endl;
	else {
		cout << "������ �: ";
		srand((unsigned)time(NULL));
		for (int i = 0; i < sz; i++)
		{
			T[i] = rand() % 100;
			cout << T[i] << ' ';
		}
		cout << endl;
		for (int i = 0; i < sz; i++)
		{
			if (T[i] == T[i + 1])
				counter++;
		}
		cout << "���������� ��� �������� ��������� � ����������� ����������: " << counter << endl;
	}
	return 0;
}