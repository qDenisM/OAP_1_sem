#include <iostream>
#include <cstdarg>
#include <locale>

// ������� ��� ���������� ������������ ��������
template<typename T>
T fmax(int count, ...)
{
    va_list args;
    va_start(args, count);

    T min_value = va_arg(args, T);
    for (int i = 1; i < count; ++i)
    {
        T value = va_arg(args, T);
        if (value < min_value)
            min_value = value;
    }

    va_end(args);

    return min_value;
}

int main()
{
    setlocale(LC_ALL, ""); // ��������� ������ ��� ���������� ������ ������� std::cout � ����������
    using namespace std;

    int count;

    // ������ ����� fmax � ����� ����������� ���� int
    count = 3;
    cout << "������� " << count << " ����� ���� int: ";
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3;
    int min_int = fmax<int>(count, int1, int2, int3);

    // ������ ����� fmax � �������� ����������� ���� double
    count = 4;
    cout << "������� " << count << " ����� ���� double: ";
    double double1, double2, double3, double4;
    cin >> double1 >> double2 >> double3 >> double4;
    double min_double = fmax<double>(count, double1, double2, double3, double4);

    // ������ ����� fmax � ����� ����������� ���� int
    count = 5;
    cout << "������� " << count << " ����� ���� int: ";
    int int4, int5, int6, int7, int8;
    cin >> int4 >> int5 >> int6 >> int7 >> int8;
    int min_int2 = fmax<int>(count, int4, int5, int6, int7, int8);

    cout << "����������� �������� int: " << min_int << endl;
    cout << "����������� �������� double: " << min_double << endl;
    cout << "����������� �������� int2: " << min_int2 << endl;

    return 0;
}