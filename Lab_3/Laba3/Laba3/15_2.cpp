#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "Russian");
    int flat;
    printf("������� ����� ��������: ");
    scanf_s("%u", &flat);

    if (flat <= 36 and flat > 0)
    {
        int floor1 = flat / 4, entrance1 = (flat - 1) / 36 + 1;
        printf("���� - %d\n", floor1); 
        printf("������� - %d", entrance1);
    }
    else
    {
        if (flat <= 72 and flat > 36)
        {
            int entrance2 = (flat - 1) / 36 + 1;
            int floor2 = ((flat - 1) / 4) % 9 + 1;
            printf("���� - %d", floor2);
            printf("������� - %d", entrance2);
        }
        else
        {
            printf("�������� ����� ��������.");
        }

    }
    
    return(0);
}
