#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
    const int N = 100;
    int sx, sy, x[N], y[N];
    int* px = x;
    int* py = y;
    int q, sum;
    int dist = 1000000000;

    cout << "Введите размер массива A: ";
    cin >> sx;
    cout << "Введите размер массива В: ";
    cin >> sy;

    if (sx > 100 || sy > 100) {
        cout << "Введены некорректные данные";
    }
    else {
        for (int i = 0; i < sx; i++) {
            cout << "Введите значение элемента " << i << " массива А: ";
            cin >> x[i];
        }

        for (int i = 0; i < sy; i++) {
            cout << "Введите значение элемента " << i << " массива B: ";
            cin >> y[i];
        }

        cout << "Массив A: ";
        for (int i = 0; i < sx; i++) {
            cout << *(px + i) << ' ';
        }
        cout << endl;

        cout << "Массив B: ";
        for (int i = 0; i < sy; i++) {
            cout << *(py + i) << ' ';
        }
        cout << endl;


        cout << "Введите число q = ";
        cin >> q;

        for (int i = 0; i < sx; i++)
        {
            for (int j = 0; j < sy; j++)
            {
                if (abs(q - (*(px + i) + *(py + j))) < dist)
                {
                    sum = *(px + i) + *(py + j);
                    dist = abs(q - (*(px + i) + *(py + j)));
                }
            }
        }
        cout << "Ближайшая сумма = " << sum;
    }
	return 0;
}