#include <iomanip>
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, space; space = ' ';
	cout << "Введите символ ";
	cin >> c;
	cout << setw(10) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(10) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(6) << setfill(space) << space;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(10) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(10) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
}