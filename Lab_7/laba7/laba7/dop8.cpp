#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, summa = 0, kon, nechet = 0;
    cout << "¬ведите кол-во элементов: ";
    cin >> n;
    if (n > 0) {
        for (int a = 1; a <= n; a++)
        {
            if (a % 2 == 1)
            {
                summa += a;
                nechet++;
            }

        }
        kon = summa / nechet;
        cout << "—реднее арифметическое нечетных значений равна: " << kon;
    }
    else
        cout << "¬ведены некорректные значени€";

    return 0;
}