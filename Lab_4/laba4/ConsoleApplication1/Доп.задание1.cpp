#include <iostream> // ����������� ���������� ���������-����������� ��� ����� ����� � ���������� %, /, +, -, *.

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int num1, num2, x;
	cout << "������� ��� �����: ";
	cin >> num1 >> num2;
	cout << "�������� ��������: " << endl << "1. ������� �� �������" << endl << "2. �������" << endl << "3. ��������" << endl << "4. ���������" << endl << "5. ���������" << endl;
	cin >> x;

	switch (x)
	{
	case 1: cout << "�����: " << int(num1) % int(num2); 
		break;
	case 2: cout << "�����: " << num1 / num2;
		break;
	case 3: cout << "�����: " << num1 + num2;
		break;
	case 4: cout << "�����: " << num1 - num2;
		break;
	case 5: cout << "�����: " << num1 * num2;
		break;
	default: cout << "������� ������������ ��������" << endl;
		break;
	}
	
	return 0;
}