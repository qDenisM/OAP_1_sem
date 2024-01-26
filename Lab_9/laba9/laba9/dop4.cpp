#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int N = 100;
	int sz, T[N], kol = 1, counter = 1;
	cout << "Введите размер массива" << endl;
	cin >> sz;
	if (sz > 100)
		cout << "Введены неверные данные" << endl;
	else {
		cout << "Массив T: ";
		srand((unsigned)time(NULL));
		for (int i = 0; i < sz; i++)
		{
			T[i] = rand() % 15;
			cout << T[i] << ' ';
		}
		cout << endl;
		for (int i = 0; i < sz; i++)
		{ 
			if (T[i] == T[i + 1]) {
				kol++;
				if (kol > counter)
				{
					counter = kol;
				}
			}
			else
				kol = 1;
		}
		cout << "Hаибольшее число подряд идущих одинаковых элементов: " << counter << endl;
	}
	return 0;
}