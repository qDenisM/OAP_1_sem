#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    setlocale(LC_CTYPE, "Russian");
    int reverse = 0;
    int number;
     printf("������� ����������� �����: ");
     scanf_s("%u", &number);
     

    if (number < 100 || number > 999) {
        printf("����� �� �������� �����������.");
        return 1;
    }
    else {
        while (number != 0) {
            int a = number % 10;
            reverse = reverse * 10 + a;
            number = number / 10;
        }

        printf("�������� �����: %d", reverse);
    }
    return 0;
}