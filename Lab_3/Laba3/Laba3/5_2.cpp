#include <iostream>
#include <stdio.h>
#include <cstdio>

int main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float x, p;
	int n;
	printf("������� ��������� ���� ������ : ");
	scanf_s("%f", &x);
	printf("������� ������� ����������/���������� ���� ������: ");
	scanf_s("%f", &p);
	printf("������� ���-�� ��� ������� ������: ");
	scanf_s("%d", &n);
	float x1 = x + x * p / 100;
	float x2 = x1 - x1 * p / 100;
	float d = x2 - x1;
	if (d < 0) 
		printf("���� ���������� �� %.2f ����� %d ���", abs(d) * n, n);
	else
		if (d > 0)
			printf("���� ���������� �� %.2f ����� %d ���", abs(d) * n, n);
		else
			printf("���� �� ���������");
	return(0);
}