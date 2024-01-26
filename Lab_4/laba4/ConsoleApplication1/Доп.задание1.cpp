#include <iostream> // Разработать консольную программу-калькулятор для целых чисел с операциями %, /, +, -, *.

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int num1, num2, x;
	cout << "Введите два числа: ";
	cin >> num1 >> num2;
	cout << "Выберите операцию: " << endl << "1. Остаток от деления" << endl << "2. Деление" << endl << "3. Сложение" << endl << "4. Отнимание" << endl << "5. Умножение" << endl;
	cin >> x;

	switch (x)
	{
	case 1: cout << "Ответ: " << int(num1) % int(num2); 
		break;
	case 2: cout << "Ответ: " << num1 / num2;
		break;
	case 3: cout << "Ответ: " << num1 + num2;
		break;
	case 4: cout << "Ответ: " << num1 - num2;
		break;
	case 5: cout << "Ответ: " << num1 * num2;
		break;
	default: cout << "Введена некорректная операция" << endl;
		break;
	}
	
	return 0;
}