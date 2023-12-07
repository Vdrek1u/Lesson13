#include <iostream>

using namespace std;

class Vector 
{
private:
    double x = 0;
    double y = 0;
    double z = 0;

public:
    // Конструктор
    Vector(double x, double y, double z) : x(x), y(y), z(z) 
    {}

    // Методы для получения координат вектора
    double GetX() 
    {
        return x;
    }

    double GetY() 
    {
        return y;
    }

    double GetZ() 
    {
        return z;
    }

    // Метод для вычисления длины вектора
    double Length()
    {
        return sqrt(x * x + y * y + z * z);
    }
};

int main()
{
    // Создание вектора
    Vector v(2, 7, 0.95);

    // Вывод координат вектора
    cout << "Vector (" << v.GetX() << ", " << v.GetY() << ", " << v.GetZ() << ")" << '\n';

    // Вывод длины вектора
    cout << "Vector length: " << v.Length() << '\n';

    return 0;
}