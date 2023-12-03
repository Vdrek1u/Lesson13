#include <iostream>


int main() {
 
    std::string myString = "My first string - Lesson 14 444444444444444444444444444444444444231212122222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222313";

    // Вывод строковой переменной
    std::cout << "String: " << myString << "\n";

    // Вывод длины строки
    std::cout << "Length: " << myString.length() << "\n";

    // Вывод первого символа строки
   
    std::cout << "First symbol: " << myString[0] << "\n";
    
    // Вывод последнего символа строки
    
    std::cout << "Last symbol: " << myString[myString.length() - 1] << "\n";

    // Вывод первого символа строки (вариант 2)

    std::cout << "First symbol_2var: " << myString.front() << "\n";

    // Вывод последнего символа строки (вариант 2)

    std::cout << "Last symbol_2var: " << myString.back() << "\n";

    // Вывод максимального размера строки

    std::cout << "Max size: " << myString.max_size() << "\n";

    return 0;
}