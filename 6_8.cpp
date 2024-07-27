//Напишите программу, которая открывает текстовый файл, читает его символ
//за символом до самого конца и сообщает количество символов в файле.
#include<iostream>
#include<fstream>
#include <cstdlib>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	ifstream inFile;
	inFile.open("6_8.txt");
	if (!(inFile.is_open()))
	{
		cout << "Could not open the file" << endl;
		exit(EXIT_FAILURE);
	}
	char ch;
	int count = 0;
	inFile >> ch;
	while (inFile.good())
	{
		++count;
		inFile >> ch;
		cout << ch << "\t";
	}
	if (inFile.eof())
		cout << "\nEnd of file\n";
	else if (inFile.fail())
		cout << "Несоответствие данных";
	else
		cout << "Вводд прекратился по неизвестной причине";
	if (count == 0)
	{
		cout << "Данные для отображения отсутствуют";
	}
	else
	{
		cout << "Количество символов в файле: " << count;
	}
	inFile.close();
	
}
