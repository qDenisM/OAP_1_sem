#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	
	int b, n, ** A;
	
	cout << "Введите размерность матрицы\n";
	cin >> b;
	cin >> n;

	A = new int* [b];
	
	for (int i = 0; i < b; i++) {
		A[i] = new int[n];
	}
	
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < n; j++) {
			cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> A[i][j];
		}
	}
	
	cout << "Матрица до: \n";
	
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	bool found = false;
	
	for (int i = 0; i < b && found != true; i++) {
		for (int j = 0, sum = 0; j < n; j++) {
			if (A[i][j] <= 0) {
				break;
			}

			if (j == (n - 1)) {
				found = true;
			}

			for (int j = 0; j < n && found == true; j++) {
				sum += A[i][j];
			}

			for (int i = 0; i < b && found == true; i++) {
				for (int j = 0; j < n; j++) {
					A[i][j] = A[i][j] - sum;
				}
			}
		}
	}

	cout << "\nРезультат: \n";

	for (int i = 0; i < b; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	free(A);

	return 0;
}
