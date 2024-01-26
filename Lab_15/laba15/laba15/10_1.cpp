#include <iostream>
#include <cmath>

using namespace std;

double equation(double x) {
    return pow(x, 3) + x - 4;
}

double newtonMethod(double (*eq)(double), double a, double b, double epsilon) {
    double x1;

    if ((*eq)(b) * (3 * pow(b, 2) + 1) > 0)
        x1 = b;
    else
        x1 = a;
    
    do {
        a = x1;
        x1 = a - ((*eq)(a) / (3 * pow(a, 2) + 1));
    } while (abs(x1 - a) > epsilon);

    return x1;
}

double bisectionMethod(double (*eq)(double), double a, double b, double epsilon) {
    double x;

    do {
        x = (a + b) / 2;
        if ((*eq)(x) * (*eq)(a) <= 0)
            b = x;
        else
            a = x;
    } while (abs(a - b) > (2 * epsilon));

    return x;
}

int main() {
    setlocale(LC_ALL, "RUS");
    double epsilon, result, a, b;

    cout << "������� �������� �������� (epsilon): ";
    cin >> epsilon;
    cout << "������� a = ";
    cin >> a;
    cout << "������� b = ";
    cin >> b;

    int methodChoice;
    cout << "�������� ����� ��� ���������� �����:\n";
    cout << "1. ����� �����������\n";
    cout << "2. ����� ���������\n";
    cin >> methodChoice;

    switch (methodChoice) {
    case 1:
        result = newtonMethod(equation, a, b, epsilon);
        break;
    case 2:
        result = bisectionMethod(equation, a, 1.38, epsilon);
        break;
    default:
        cout << "������������ ����� ������." << endl;
        return 0;
    }

    cout << "x = " << result << endl;

    return 0;
}
