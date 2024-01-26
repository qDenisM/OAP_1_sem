#include <iostream>
#include <cmath>

using namespace std;

double equation(double x) {
    return pow(x, 3) + 2 * x - 1;
}

double newtonMethod(double (*eq)(double), double a, double b, double epsilon) {
    double x1;

    if ((*eq)(b) * (3 * pow(b, 2) + 2) > 0)
        x1 = b;
    else
        x1 = a;

    do {
        a = x1;
        x1 = a - ((*eq)(a) / (3 * pow(a, 2) + 2));
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

    cout << "Введите желаемую точность (epsilon): ";
    cin >> epsilon;
    cout << "Введите a = ";
    cin >> a;
    cout << "Введите b = ";
    cin >> b;

    int methodChoice;
    cout << "Выберите метод для вычисления корня:\n";
    cout << "1. Метод касательных\n";
    cout << "2. Метод дихотомии\n";
    cin >> methodChoice;

    double (*selectedMethod)(double (*)(double), double, double, double) = nullptr;

    switch (methodChoice) {
    case 1: {
        selectedMethod = newtonMethod;
        result = selectedMethod(equation, a, b, epsilon);
        break;
    }
    case 2: {
        result = bisectionMethod(equation, a, 0.45, epsilon);
        break;
    }
    default: {
        cout << "Некорректный выбор метода." << endl;
        return 0;
    }
    }

    cout << "x = " << result << endl;

    return 0;
}
