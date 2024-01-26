#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	int n, count = 0;
	
	cout << "Введите размер массива: ";
	cin >> n;

	int* mass = (int*)malloc(n * sizeof(int));
	
	cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "mass[" << i << "]: ";
		cin >> mass[i];
	}

	int max = mass[0];

	for (int i = 0; i < n; i++)
	{
		if (mass[i] > max)
		{
			max = mass[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (max == mass[i])
		{
			count++;
		}
	}

	cout << "Максимальное число встречалось " << count << " раз(-а)";

	free(mass);

	return 0;
}
