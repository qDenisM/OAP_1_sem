#include <iostream>
#include <cmath>

using namespace std;

double equation(double x) {
    return exp(x) + 2 * pow(x, 2) - 3;
}

double newtonMethod(double (*equation)(double), double a, double epsilon) {
    double x1, x;

    if ((*equation)(a) * ((*equation)(a) + 4 * a) > 0)
        x1 = a;
    else
        x1 = a + 1; 

    do {
        x = x1;
        x1 = x - ((*equation)(x) / (exp(x) + 4 * x));
    } while (abs(x1 - x) > epsilon);

    return x1;
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

    double (*selectedMethod)(double (*)(double), double, double) = nullptr;

        selectedMethod = newtonMethod;
        result = selectedMethod(equation, a, epsilon);

    cout << "x = " << result << endl;

    return 0;
}
