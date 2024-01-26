#include <iostream>
#include <stdio.h>
#include <cstdio>

int main() {
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    float m;
    printf("Введите число m: ");
    scanf_s("%f", &m);
    float x = (m - 5) / 2;
    float y = x + 5;
    printf("Первая часть равна: %.2f", x);
    printf("Вторая часть равна: %.2f", y);
    return (0);
}