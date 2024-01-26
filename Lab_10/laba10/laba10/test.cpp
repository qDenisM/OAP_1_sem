#include <iostream> 
#include <windows.h>

using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char t[33];
    int A, B, q, p, m, n, maska = 0, maskb = 0;
    cout << "Введите число A: ";
    cin >> A;
    _itoa_s(A, t, 2);
    cout << "Двоичный код А: " << t << endl;
    cout << "Введите n: ";
    cin >> n;
    cout << "Введите p: ";
    cin >> p;
    cout << "Введите число B: ";
    cin >> B;
    _itoa_s(B, t, 2);
    cout << "Двоичный код B: " << t << endl;
    cout << "Введите m: ";
    cin >> m;
    cout << "Введите q: ";
    cin >> q;
    // Масіў для захоўвання двайковака прадстаўлення ліка  
    
    for (int i = p; i < p + n; i++) { // Ствараем маску для а
        maska += pow(2, i);
    }
    A = (A & ~maska); // З дапамогай маскі робім патрэбныя біты нулямі
    p = q - p; // Глядзім, як нам трэба здвінуць маску, параўноўвая пазіцыі
    if (p < 0) {
        maska = maska >> abs(p);
    }
    else if (p > 0) {
        maska = maska << p;
    }
    for (int i = q - 1; i < q - 1 + m; i++) { // Знаходзім маску для b, каб замяніць тыя элементы нулямі 
        maskb += pow(2, i);
    }
    B = (B & ~maskb); // Замянем патрэбныя нам элементы нулямі
    B = (B | maska); // Мяняем патрэбныя нам элементы на элементы з а
    _itoa_s(A, t, 2);
    cout << "Результат А: " << t << endl; // Выводзім а ў двойкавай сістэме
    _itoa_s(B, t, 2);
    cout << "Результат B: " << t << endl; // Выводзім b ў двойкавай сістэме
}