#include <iostream>
#include <stdio.h>
#include <cstdio>

int main() {
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    float m;
    printf("������� ����� m: ");
    scanf_s("%f", &m);
    float x = (m - 5) / 2;
    float y = x + 5;
    printf("������ ����� �����: %.2f", x);
    printf("������ ����� �����: %.2f", y);
    return (0);
}