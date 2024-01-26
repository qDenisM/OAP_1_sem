#include <iostream>
#include <ctime>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, sz, T[N];
	cout << "Введите размер массива: ";
	cin >> sz;
	if (sz > 100)
		cout << "Введены некорректные данные";
	else {
		for (int i = 0; i < sz; ++i) {
			std::cout << "Введите значение элемента " << i << ": ";
			std::cin >> T[i];
		}
		int min = T[0];
		for (int i = 0; i < sz; i++)
		{
			if (T[i] < min)
			{
				min = T[i];
			}
		}
		cout << "Минимальные элемент равен: " << min << endl;
		for (int i = 0; i < sz; i += 2)
		{
			T[i] = min;
		}
		for (int i = 0; i < sz; i++)
		{
			cout << T[i] << ' ';
		}
	}
	return 0;
}
