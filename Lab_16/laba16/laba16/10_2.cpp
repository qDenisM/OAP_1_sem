#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstdarg>

std::string concatenateWords(int num, ...) {
    std::ostringstream oss;
    va_list args;
    va_start(args, num);

    for (int i = 0; i < num; ++i) {
        const char* word = va_arg(args, const char*);
        oss << word << " ";
    }

    va_end(args);
    return oss.str();
}

int main() {
    setlocale(LC_ALL, "ru");
    
    // Обращения к функции пользователя с различным количеством параметров
    std::string result1 = concatenateWords(3, "banana", "orange", "apple");
    std::cout << "Результат 1: " << result1 << std::endl;

    std::string result2 = concatenateWords(5, "zebra", "lion", "elephant", "tiger", "monkey");
    std::cout << "Результат 2: " << result2 << std::endl;

    std::string result3 = concatenateWords(2, "watermelon", "grape");
    std::cout << "Результат 3: " << result3 << std::endl;

    return 0;
}
