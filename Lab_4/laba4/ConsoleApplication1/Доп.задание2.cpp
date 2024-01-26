#include <iostream> // Может ли шар радиуса r пройти через ромбообразное отверстие с диагоналями p и q?
#define _USE_MATH_DEFINES 
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	float r, p, q, pi;
	pi = atan(1) * 4;
	cout << "Введите радиус шара: ";
	cin >> r;
	cout << "Введите диагонали ромбообразного отверстия: ";
	cin >> p >> q;
	if (r > 0, p > 0, q > 0) {
		if ((p * q) / 2 > pi * pow(r, 2)) {
			cout << "Шар пройдет через данное отверстие" << endl;
		}

		else {
			cout << "Шар не пройдет через данное отверстие" << endl;
		}
	}
	else {
		cout << "Введены неверные данные" << endl;
	}
	return 0;
}