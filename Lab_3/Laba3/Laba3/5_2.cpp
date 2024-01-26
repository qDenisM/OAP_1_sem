#include <iostream>
#include <stdio.h>
#include <cstdio>

int main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float x, p;
	int n;
	printf("¬ведите начальную цену молока : ");
	scanf_s("%f", &x);
	printf("¬ведите процент увеличение/уменьшение цены молока: ");
	scanf_s("%f", &p);
	printf("¬ведите кол-во лет продажи молока: ");
	scanf_s("%d", &n);
	float x1 = x + x * p / 100;
	float x2 = x1 - x1 * p / 100;
	float d = x2 - x1;
	if (d < 0) 
		printf("÷ена уменьшитс€ на %.2f через %d лет", abs(d) * n, n);
	else
		if (d > 0)
			printf("÷ена увеличитс€ на %.2f через %d лет", abs(d) * n, n);
		else
			printf("÷ена не изменитс€");
	return(0);
}