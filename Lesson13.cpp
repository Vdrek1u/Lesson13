//struct tm buf;
//time_t t = time(0);
//localtime_s(&buf, &t);
//Затем, чтобы получить день месяца, возьмите buf.tm_mday.
#include <iostream>
#include <time.h>
#include <chrono>

using namespace std;

int main()
{
    // размер массива
    const int N = 6;
    int Array[N][N];

    cout << "Array:\n\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Array[i][j] = i + j;
            cout << Array[i][j] << " ";
        }
        cout << '\n' ;
    }
    cout << '\n';

    //получение текущего дня
    struct tm buf;
    time_t t = time(0);
    localtime_s(&buf, &t);

    int Day = buf.tm_mday;

    // тест конкретного дня
    // int Day = 12;

    //получение номера строки
    int RowIndex = (Day % N) - 1;

    if (RowIndex == -1)
    {
        RowIndex = N - 1;
    }

    //вывод суммы значений строки массива
    int Sum = 0;
    for (int j = 0; j < N; j++)
    {
        Sum += Array[RowIndex][j];
    }

    cout << "Day:" << Day << '\n';
    cout << "RowIndex: " << RowIndex << '\n';
    cout << "SumRowNumbers: " << Sum << '\n';

    return 0;
}