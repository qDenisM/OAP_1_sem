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

    cout << "������� ������ ������� A: ";
    cin >> sx;
    cout << "������� ������ ������� �: ";
    cin >> sy;

    if (sx > 100 || sy > 100) {
        cout << "������� ������������ ������";
    }
    else {
        for (int i = 0; i < sx; i++) {
            cout << "������� �������� �������� " << i << " ������� �: ";
            cin >> x[i];
        }

        for (int i = 0; i < sy; i++) {
            cout << "������� �������� �������� " << i << " ������� B: ";
            cin >> y[i];
        }

        cout << "������ A: ";
        for (int i = 0; i < sx; i++) {
            cout << *(px + i) << ' ';
        }
        cout << endl;

        cout << "������ B: ";
        for (int i = 0; i < sy; i++) {
            cout << *(py + i) << ' ';
        }
        cout << endl;


        cout << "������� ����� q = ";
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
        cout << "��������� ����� = " << sum;
    }
	return 0;
}