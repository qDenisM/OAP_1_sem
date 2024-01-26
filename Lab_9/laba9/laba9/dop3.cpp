#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int N = 100;
	int sz, T[N], counter = 0;
	cout << "Введите размер массива" << endl;
	cin >> sz;
	if (sz > 100)
		cout << "Введены неверные данные" << endl;
	else {
		cout << "Массив Т: ";
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
		cout << "Количество пар соседних элементов с одинаковыми значениями: " << counter << endl;
	}
	return 0;
}