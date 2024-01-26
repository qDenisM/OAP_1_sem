
#include <iostream>
using namespace std;
int massiv() {
    int size;
    cout << "������� ����������� �������: ";

    cin >> size;
    cout << endl;

    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "������: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int min_size = arr[0];
    int min_size_num;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= min_size)
        {
            min_size = arr[i];
            min_size_num = i;
        }
    }
    cout << endl;

    cout << "����������� ������� = " << min_size << ", ������� ��������� � ��������: " << min_size_num << endl;

    int sum = 0;
    int mult = 1;

    for (int i = 0; i < min_size_num; i++)
    {
        sum += arr[i];
        mult *= arr[i];
    }
    cout << endl;
    cout << "����� ��������� �� " << min_size_num << " ������ ����� = " << sum << ", ������������ = " << mult << endl;

    free(arr);

    return 0;
}

int matrix() {
	int b, n, ** A;

	cout << "������� ����������� �������\n";
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

	cout << "������� ��: \n";

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

	cout << "\n���������: \n";

	for (int i = 0; i < b; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	free(A);

	return 0;
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int c;
    do
    {

        cout << "�������" << endl;
        cout << "1-���������� ������" << endl;
        cout << "2-������ � ��������" << endl;
        cout << "3-�����" << endl;
        cin >> c;

        switch (c)
        {
        case 1:
            massiv();
            break;
        case 2:
            matrix();
            break;
        case 3:
            break;
        }
    } while (c != 3);

    return 0;
}