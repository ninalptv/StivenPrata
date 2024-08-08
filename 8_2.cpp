//Структура CandyBar содержит три члена.Первый член хранит название коробки
//конфет.Второй —
//ее вес(который может иметь дробную часть), а третий —
//количество калорий(целое значение).Напишите программу, использующую
//функцию, которая принимает в качестве аргументов ссылку на CandyBar, указатель
//на char, значение double и значение int.Функция использует три последних
//значения для установки соответствующих членов структуры.Три последних
//аргумента должны иметь значения по умолчанию : "Millennium Munch", 2 . 85 и 350.
//Кроме того, программа должна использовать функцию, которая принимает в
//качестве аргумента ссылку на CandyBar и отображает содержимое этой структуры.
//Где необходимо, используйте const.

#include <iostream>
using namespace std;

struct CandyBar
{
	char const* NameCandyBox;
	double weight;
	int ccal;
};
void ShowCandyBar(const CandyBar& cb)
{
	cout << "The name of the candy box: " << cb.NameCandyBox << endl;
	cout << "The weigth of the candy box: " << cb.weight << endl;
	cout << "Calories: " << cb.ccal << endl;
}
CandyBar NewCandyBar(CandyBar& cd, char const* name = "Millennium Munch", double weight = 2.85, int ccal = 350)
{
	cd.NameCandyBox = name;
	cd.weight = weight;
	cd.ccal = ccal;
	return cd;
}

int main()
{
	CandyBar cb;
	NewCandyBar(cb);
	ShowCandyBar(cb);
	NewCandyBar(cb, "Tasty Candy", 3.09, 320);
	ShowCandyBar(cb);
	return 0;
}
