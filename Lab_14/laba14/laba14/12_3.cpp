
# include <iostream>
using namespace std;
int massiv() {
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
    cout << endl;
    return 0;
}

int matrix() {
    int** A;
    int N;
    int M;

    cout << "Введите размер матрицы A: ";
    cin >> N;
    cin >> M;

    A = new int* [N];
    for (int i = 0; i < N; ++i) {
        A[i] = new int[M];
    }

    cout << "Введите элементы матрицы A(N, M):\n";
    for (int i = 0; i < N; ++i) {
        cout << "Введите элементы для строки " << i + 1 << ":\n";
        for (int j = 0; j < M; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    bool found = false;
    int rowNum = -1;

    for (int i = 0; i < N; ++i) {
        bool hasPositive = false;
        for (int j = 0; j < M; ++j) {
            if (A[i][j] > 0) {
                hasPositive = true;
                found = true;
                rowNum = i + 1;
                break;
            }
        }

        if (hasPositive) {
            break;
        }
    }

    if (found) {
        cout << "Строка с положительным элементом найдена: " << rowNum << endl;

        if (rowNum > 1) {
            int prevRow = rowNum - 2;

            cout << "Изменение знаков элементов строки " << prevRow + 1 << ": ";
            for (int j = 0; j < M; ++j) {
                A[prevRow][j] *= -1;
                cout << A[prevRow][j] << " ";
            }
        }
    }
    else {
        cout << "В матрице нет строки с положительным элементом\n";
    }

    free(A);

    return 0;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int c;
	do
	{
		
		cout << "Введите" << endl;
		cout << "1-одномерный массив" << endl;
		cout << "2-работа с матрицей" << endl;
		cout << "3-выход" << endl;
		cin >> c;

		switch (c)
		{
		case 1: 
            massiv(); 
            break;
		case 2: 
            matrix();
            break;
		case 3: 
            break;
		}
	} while (c != 3);

	return 0;
}