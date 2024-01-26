#include <iostream>
#include <iomanip>

int main() {
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    char c, space; 
    space = ' ';
    cout << "Введите символ: ";
    cin >> c;
    cout << setw(50) << setfill(space) << space;
    cout << setw(10) << setfill(c) << c << endl;
    cout << setw(49) << setfill(space) << space;
    cout << setw(12) << setfill(c) << c << endl;
    cout << setw(48) << setfill(space) << space;
    cout << setw(14) << setfill(c) << c << endl;
    cout << setw(47) << setfill(space) << space;
    cout << setw(16) << setfill(c) << c << endl;
    cout << setw(48) << setfill(space) << space;
    cout << setw(14) << setfill(c) << c << endl;
    cout << setw(49) << setfill(space) << space;
    cout << setw(12) << setfill(c) << c << endl;
    cout << setw(50) << setfill(space) << space;
    cout << setw(10) << setfill(c) << c << endl;
}