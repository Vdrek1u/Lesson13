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
    double getX() 
    {
        return x;
    }

    double getY() 
    {
        return y;
    }

    double getZ() 
    {
        return z;
    }

    // Метод для вычисления длины вектора
    double length()
    {
        return std::sqrt(x * x + y * y + z * z);
    }
};

int main()
{
    // Создание вектора
    Vector v(2, 7, 0.95);

    // Вывод координат вектора
    cout << "Vector (" << v.getX() << ", " << v.getY() << ", " << v.getZ() << ")" << '\n';

    // Вывод длины вектора
    cout << "Vector length: " << v.length() << '\n';

    return 0;
}