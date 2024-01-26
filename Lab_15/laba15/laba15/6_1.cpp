#include <iostream>
#include <cmath>

using namespace std;

double equation(double x) {
    return 5 * x - 1 + pow(x, 3);
}

double derivative(double x) {
    return 5 + 3 * pow(x, 2);
}

double newtonMethod(double (*eq)(double), double (*deriv)(double), double a, double b, double epsilon) {
    double x1;

    if ((*eq)(b) * (*deriv)(b) > 0)
        x1 = b;
    else
        x1 = a;

    do {
        a = x1;
        x1 = a - ((*eq)(a) / (*deriv)(a));
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
    } while (abs(b - a) > epsilon);

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

    switch (methodChoice) {
    case 1: {
        result = newtonMethod(equation, derivative, a, b, epsilon);
        break;
    }
    case 2: {
        result = bisectionMethod(equation, a, 0.19, epsilon);
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
