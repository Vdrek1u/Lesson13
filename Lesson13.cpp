#include <iostream>

using namespace std;

class Animal 
{
public:
    virtual void Voice()
    {
        cout << "Animal sound" << '\n';
    }
};

// Наследуемый класс Dog
class Dog : public Animal 
{
public:
    void Voice() override 
    {
        cout << "Dog say Woof" << '\n';
    }
};

// Наследуемый класс Cat
class Cat : public Animal 
{
public:
    void Voice() override 
    {
        cout << "Cat say Meow" << '\n';
    }
};

// Наследуемый класс Cow
class Cow : public Animal 
{
public:
    void Voice() override 
    {
        cout << "Cow say Moo" << '\n';
    }
};

int main() 
{
    const int size = 3;
    Animal* animals[size];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    // Вызов метода Voice для каждого животного
    for (int i = 0; i < size; i++) 
    {
        animals[i]->Voice();
    }

    // Освобождение памяти
    for (int i = 0; i < size; i++)
    {
        delete animals[i];
    }

    return 0;
}

//Создайте класс Animal с публичным методом Voice(), который выводит в консоль строку с текстом.
//Наследуйте от Animal минимум три класса(к примеру Dog, Cat и т.д.) и в них перегрузите метод Voice() таким образом, чтобы для примера в классе Dog метод Voice() выводилось Woof!в консоль.
//В функции main создайте массив указателей типа Animal и заполните этот массив объектами созданных классов.
//Затем пройдитесь циклом по массиву, вызывая на каждом элементе массива метод Voice().
//Протестируйте его работу.Должны выводиться сообщения из ваших классов - наследников Animal.