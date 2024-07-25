//Напишите программу, которая использует массив char и цикл для чтения но
//одному слову за раз до тех пор, пока не будет введено слово done.Затем
//программа должна сообщить количество введенных слов(исключая done).Пример
//запуска должен быть таким :
//Вводите слова(для завершения введите слово done) :
//	anteater birthday category dumpsteг
//	envy finagle geometry done for sure
//	Вы ввели 7 слов .
#include<iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 20;
	char answer[size];
	int qty = 0;
	cout << "Вводите слова(для завершения введите слово done) :\n";
	cin >> answer;
	while (strcmp(answer, "done"))
	{
		cin >> answer;
		++qty;
	}

	cout << "Вы ввели " << qty << " слов." << endl;
	cin.get();

	return 0;
}