//Ниже представлена общая структура программы :
//#include <iostream>
//using namespace std;
//#include <cstring> // для strlen(), strcpyO
//struct stringy {
//	char* str; // указывает на строку
//	int ct; // длина строки (не считая символа '\0')
//}; 
//// Здесь размещаются прототипы функций set() и show()
//int main()
//{
//	stringy beany;
//	char testing[] = "Reality isn't what it used to be.";
//	set(beany, testing); // первым аргументом является ссылка,
//	// Выделяет пространство для хранения копии testing,
//	// использует элемент типа str структуры beany как указатель
//	// на новый блок, копирует testing в новый блок и
//	// создает элемент ct структуры beany
//	show(beany); // выводит строковый член структуры один раз
//	show(beany, 2); // выводит строковый член структуры два раза
//	testing[0] ='D';
//	testing[1] = 'u';
//	show(testing); // выводит сроку testing один раз
//	show(testing, 3); // выводит строку testing три раза
//	show("Done!");
//	return 0;
//}
//Завершите программу, создав соответствующие функции и прототипы.Обратите
//внимание, что в программе должны быть две функции show(), и каждая из
//них использует аргументы по умолчанию.Где необходимо, используйте const.
//Функция set() должна использовать операцию new для выделения
//достаточного пространства памяти под хранение заданной строки.Используемые здесь
//методы аналогичны методам, применяемым при проектировании и реализации
//классов. (В зависимости от используемого компилятора, может понадобиться
//	изменить имена заголовочных файлов и удалить директиву using.)

#include <iostream>
#include <string> // äëÿ strlen(), strcpyO
struct stringy {
	char* str; // óêàçûâàåò íà ñòðîêó
	int ct; // äëèíà ñòðîêè (íå ñ÷èòàÿ ñèìâîëà '\0')

};
// Çäåñü ðàçìåùàþòñÿ ïðîòîòèïû ôóíêöèé set() è show()
void show(const char* str, int Count = 1)
{
	for (int i = 0; i <Count; i++)
	{
		std::cout << str << std:: endl;
	}
}
void show(const stringy &st, int Count = 1)
{
	for (int i = 0; i < Count; i++)
	{
		std::cout << st.str << std:: endl;
	}
}
void set(stringy& st, const char* str)
{
	st.ct = int(strlen(str));
	st.str = new char[st.ct+1];
	strcpy_s(st.str,st.ct+1, str);
}
void deletestr(stringy& st)
{
	delete[]st.str;
}
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); 
	show(beany); 
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); 
	show(testing, 3); 
	show("Done!");
	deletestr(beany);
	return 0;
}
