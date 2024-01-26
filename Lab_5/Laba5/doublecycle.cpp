 #include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 0; i <= 2; i++) {

		double z, y, b = 2, m[] = { 0.4, -1, 1.9 }, a = 2.4e-4, j[] = { -1.7, -2.9, -8 };

		while (b <= 3.5) {
			y = (m[i] - b) / (sin(a) - exp(a));
			z = 3 * y + sqrt(a - 4 * j[i] * b);
			cout << "Если b равно: " << b << ", а m равно: " << m[i] << " и значение j равно: " << j[i] << ", то y равно: " << y << endl;
			b += 0.5;
		}
	}

	return 0;
}