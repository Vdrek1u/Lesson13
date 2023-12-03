#include <iostream>

void PrintToLimit(int Limit, bool StartWith)
{
    // Начальное число (true (0) для чётных, false (1) для нечётных)
    int First = StartWith ? 0 : 1;

    for (int i = First; i <= Limit; i += 2) 
    {
        std::cout << i << " ";
    }
    std::cout << '\n';
}

int main() 
{
    //присваиваем значение лимиту - константу
    const int N = 54;

    /* присваиваем значение лимиту через ввод пользователем в консоли
    int N; 

    std::cout << "Print even and odd numbers to limit" << '\n' << "Print limit: ";
    std::cin >> N;
    std::cout << '\n' << '\n';
    */

    // Вывод чётных чисел
    std::cout << "Even:  ";
    PrintToLimit(N, true);
    std::cout << '\n';

    // Вывод нечётных чисел
    std::cout << "Odd:   ";
    PrintToLimit(N, false);
    std::cout << '\n';

    return 0;
}