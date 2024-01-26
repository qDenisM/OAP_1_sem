#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int qa;

	cout << "Кто нарисовал фреску «Тайная вечеря»?: " << endl << "1. Микеланджело" << endl << "2. Донателло" << endl << "3. Леонардо Да Винчи" << endl << "Ваш ответ: ";
	cin >> qa;

	switch (qa) {
	case 1: cout << "Неверный ответ" << endl; break;
	case 2: cout << "Неверный ответ" << endl; break;
	case 3: cout << "Верный ответ" << endl; break;
	default: cout << "Введено некорректное число" << endl; break;
	}

	cout << "Продолжением какой могущественной древней империи была Византийская империя?" << endl << "1. Британская империя" << endl << "2. Римская империя" << endl << "3. Монгольская империя" << endl << "Ваш ответ: ";
	cin >> qa;

	switch (qa) {
	case 1: cout << "Неверный ответ"; break;
	case 2: cout << "Верный ответ"; break;
	case 3: cout << "Неверный ответ"; break;
	default: cout << "Введено некорректное число"; break;
	}
	return 0;
}