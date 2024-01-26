#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	float x, ei, km, sm, mm;
	cout << "¬ведите значение x: ";
	cin >> x;
	if (x > 0) {
		cout << "¬ведите единицу измерени€ (километр - 1, метр - 2, сантиметр - 3, миллиметр - 4): ";
		cin >> ei;
		if (ei == 1)
		{
			km = x * 1000;
			cout << "«начение в метрах равно: " << km << endl;
			return 0;
		}

		else if (ei == 2)
		{
			cout << "«начение в метрах равно: " << x << endl;
			return 0;
		}

		else if (ei == 3)
		{
			sm = x / 100;
			cout << "«начение в метрах равно: " << sm << endl;
			return 0;
		}

		else if (ei == 4)
		{
			mm = x / 1000;
			cout << "«начение в метрах равно: " << mm << endl;
			return 0;
		}

		else {
			cout << "¬ведена некорректна€ единица измерени€" << endl;
			return 0;
		}

	}
	else {
		cout << "¬ведено некорректное значение"
	}
}