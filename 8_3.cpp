//Напишите функцию, которая принимает ссылку на объект string в качестве
//параметра и преобразует содержимое string в символы верхнего регистра.
//Используйте функцию toupper(), описанную в табл. 6.4 (см.главу 6).Напишите
//программу, использующую цикл, которая позволяет проверить работу функции
//для разного ввода.Пример вывода может выглядеть следующим образом :
//Enter a string(q to quit) : go away
//GO AWAY
//Next string(q to quit) : good grief!
//GOOD GRIEF!
//Next string(q to quit) : q
//Bye.
#include <iostream>
#include <string>
using namespace std;
string ToUpper(string & str)
{
	string newstr="";
	for (int i = 0; i < str.size(); i++)
	{
		newstr.push_back(toupper(str[i]));
	}
	return newstr;
}

int main()
{
	string str;
	/*str = "ddsgs gsg";
	cout << char(toupper(str[0]));
	cout << str.size();*/
	cout << "Enter a string(q to quit) :";
	getline(cin, str);
	while (str!="q")
	{
		cout << ToUpper(str) << endl;
		cout << "Next string(q to quit) :";
		getline(cin, str);
	}
	return 0;
}
