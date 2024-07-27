//Королевство Нейтрония, где денежной единицей служит тварп, использует следующую шкалу налогообложения :
//первые 5 000 тварпов —налог 0 %
//следующие 10 000 тварпов —налог 10 %
//следующие 20 000 тварпов —налог 15 %
//свыше 35 000 тварпов —налог 20 %
//Например, если некто зарабатывает 38 000 тварпов, то он должен заплатить
//налогов 5000 х 0, 00 + 10000 х 0, 10 + 20000 х 0, 15 + 3000 х 0, 20, или 4 600 тварпов.
//Напишите программу, которая использует цикл для запроса доходов и выдачи
//подлежащего к выплате налога.Цикл должен завершаться, когда пользователь
//вводит отрицательное или нечисловое значение.
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    using std::cout;
    using std::cin;
    const double TAX_FACTOR = 5000;
    cout << "Welcome to the portal of the tax service of the Kingdom of Neutronia.\n"
        "This programm will help you calculate the amount of income tax.\n"
        "Enter the amount of income for which you want to calculate the income tax:\n";
    double income = 0;
    double tax = 0;
    while (cin >> income && income >= 0)
    {
        if (income <= TAX_FACTOR)
            tax = 0;
        else if (income > TAX_FACTOR && income <= TAX_FACTOR * 3)
            tax = (income - TAX_FACTOR) * 0.10;
        else if (income > TAX_FACTOR * 3 && income <= TAX_FACTOR * 7)
            tax = (TAX_FACTOR * 2 * 0.10) + ((income - TAX_FACTOR * 2) * 0.15);
        else
            tax = (TAX_FACTOR * 2 * 0.10) + (TAX_FACTOR * 4 * 0.15) + ((income - TAX_FACTOR * 7) * 0.20);
        cout << "Your income tax is " << tax << " tvarps.\n";
        cout << "Enter the amount of income for which you want to calculate the income tax:\n";
    }
    cout << "\nBye!\n";
    return 0;
}
