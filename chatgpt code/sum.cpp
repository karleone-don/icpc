#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
    std::string line;

    while (std::getline(std::cin, line) && !line.empty()) {
        // Создаем объект класса std::istringstream с нашей строкой
        std::istringstream iss(line);
        
        // Создаем вектор для хранения чисел
        std::vector<int> numbers;
        
        int number;
        
        // Используем оператор >> для извлечения чисел из строкового потока
        while (iss >> number) {
            // Добавляем число в вектор
            numbers.push_back(number);
        }
        
        // Выводим содержимое вектора чисел
        for (const auto& n : numbers) {
            std::cout << n << std::endl;
        }
    }

    return 0;
}