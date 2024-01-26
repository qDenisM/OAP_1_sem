#include<iostream> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus"); 

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
    cout << "����� ��������� �� " << min_size_num + 1 << " ������ ����� = " << sum << ", ������������ = " << mult << endl;

    free(arr);

    return 0;
}
