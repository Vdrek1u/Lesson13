#include <iostream>

using namespace std;

//Создайте класс, полями которого будут имя игрока и количество набранных этим игроком очков.
// 
//Узнайте у пользователя, сколько игроков он хочет добавить, и создайте динамический массив необходимого размера.Получите от пользователя имена игроков и набранные ими очки и сохраните в массиве.
// 
//Отсортируйте массив по убыванию количества очков, набранных игроками.
// 
//Выведите все имена и очки игроков в отсортированном виде.

class ScoreTable
{
public:
    string name;
    int score;

    ScoreTable() : name(""), score(0) 
    {}
    ScoreTable(string name, int score) : name(name), score(score)
    {}

};


void SortPlayers(ScoreTable* l, ScoreTable* r)
{
    int sz = r - l;
    if (sz <= 1) return;
    bool swapped = true;
    while (swapped) 
    {
        swapped = false;
        for (ScoreTable* i = l; i + 1 < r; i++) 
        {
            if (i->score < (i + 1)->score) 
            {
                swap(*i, *(i + 1));
                swapped = true;
            }
        }
        r--;
    }
}

int main() {
    int NumberOfPlayers;
    cout << "Players number: ";
    cin >> NumberOfPlayers;

    // Создание динамического массива
    ScoreTable* Players = new ScoreTable[NumberOfPlayers];

    // Получение данных об игроках
    for (int i = 0; i < NumberOfPlayers; i++) {
        cout << "Player " << (i + 1) << " - Name: ";
        cin >> Players[i].name;
        cout << "Player " << (i + 1) << " - Score: ";
        cin >> Players[i].score;
    }
    // Сортировка массива по убыванию очков
    SortPlayers(Players, Players + NumberOfPlayers);

    // Вывод результатов
    cout << "Sort players:\n";
    for (int i = 0; i < NumberOfPlayers; i++) 
    {
        cout << Players[i].name << ": " << Players[i].score << '\n';
    }
    // Освобождение памяти
    delete[] Players;

    return 0;
}