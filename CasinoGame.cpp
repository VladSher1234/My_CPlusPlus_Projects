#include <iostream>
#include <random>
using namespace std;

int random(int min, int max)
{
    static random_device rd;
    static mt19937 gen(rd());
    static uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

int main()
{
    int CompNumber = random(1, 6), EntNumber, Moneys = 10;
    cout << "I write this game on Russian! If you don't speak the Russian, use the Google Translate.";
    cout << "Давай поиграем в 'Угадай число'!" << '\n';
    while (true)
    {
        cout << "Введи число от 1 до 6: ";
        cin >> EntNumber;
        if ((EntNumber > 6) or (EntNumber < 1))
        {
            cout << "Вводи числа от одного до шести!" << '\n';
        }
        else
        {
            if (EntNumber != CompNumber)
            {
                cout << "Твое число неправильное!" << '\n';
                Moneys -= 1;
                cout << "У тебя столько монет: " << Moneys << '\n';
            }
            else
            {
                cout << "Твое число правильное!" << '\n';
                CompNumber = random(1, 6);
                Moneys += 6;
                cout << "У тебя столько монет: " << Moneys << '\n';
            }
        }
        if (Moneys == 0)
        {
            cout << "И к великому сожалению вы БАНКРОТ! Вы исключены из игры с ничем!" << '\n';
            exit(1);
        }
    }
}