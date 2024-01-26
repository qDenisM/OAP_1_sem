#include <iostream>
#include <cstdarg>
#include <locale>

// Функция для нахождения минимального значения
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
    setlocale(LC_ALL, ""); // Установка локали для правильной работы функции std::cout с кириллицей
    using namespace std;

    int count;

    // Первый вызов fmax с тремя параметрами типа int
    count = 3;
    cout << "Введите " << count << " числа типа int: ";
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3;
    int min_int = fmax<int>(count, int1, int2, int3);

    // Второй вызов fmax с четырьмя параметрами типа double
    count = 4;
    cout << "Введите " << count << " числа типа double: ";
    double double1, double2, double3, double4;
    cin >> double1 >> double2 >> double3 >> double4;
    double min_double = fmax<double>(count, double1, double2, double3, double4);

    // Третий вызов fmax с пятью параметрами типа int
    count = 5;
    cout << "Введите " << count << " чисел типа int: ";
    int int4, int5, int6, int7, int8;
    cin >> int4 >> int5 >> int6 >> int7 >> int8;
    int min_int2 = fmax<int>(count, int4, int5, int6, int7, int8);

    cout << "Минимальное значение int: " << min_int << endl;
    cout << "Минимальное значение double: " << min_double << endl;
    cout << "Минимальное значение int2: " << min_int2 << endl;

    return 0;
}