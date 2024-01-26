#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int N = 100;
	int i, sz, T[N];
	cout << "Введите размер массива" << endl;
	cin >> sz;
	if (sz > 100)
		cout << "Введены некорректные данные" << endl;
	else {
		cout << "Массив T: ";
		srand((unsigned)time(NULL));
		for (i = 0; i < sz; i++)
		{
			T[i] = rand() % 100;
			cout << T[i] << ' ';
		}
		cout << endl;

		int min = T[0];
		int max = T[0];
		for (int i = 0; i < sz; i++)
		{
			if (T[i] < min)
				min = T[i];
			if (T[i] > max) 
				max = T[i];			
		}
		cout << "min = " << min << endl;
		cout << "max = " << max << endl;
		
		for (int i = 0; i < sz / 2; i++) {
			
			int temp = T[i];
			T[i] = T[sz - 1 - i];
			T[sz - 1 - i] = temp;
			
		}
		cout << min << ' ';
		for (int i = 0; i < sz; i++)
		{
			cout << T[i] << ' ';
		}
		cout << max;
	}
	return 0;
}