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
    cout << setw(1) << setfill(c) << c << endl;
    cout << setw(49) << setfill(space) << space;
    cout << setw(3) << setfill(c) << c << endl;
    cout << setw(48) << setfill(space) << space;
    cout << setw(5) << setfill(c) << c << endl;
    cout << setw(47) << setfill(space) << space;
    cout << setw(7) << setfill(c) << c << endl;
    cout << setw(46) << setfill(space) << space;
    cout << setw(9) << setfill(c) << c << endl;
} 