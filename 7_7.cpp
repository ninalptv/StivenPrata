//Вернитесь к программе из листинга 7.7 и замените три функции обработки
//массивов версиями, которые работают с диапазонами значений, заданными парой
//указателей.Функция f ill_array() вместо возврата действительного
//количества прочитанных значений должна возвращать указатель на место, следующее за
//последним введенным элементом; прочие функции должны использовать его в
//качестве второго аргумента для идентификации конца диапазона данных.
#include <iostream>
using namespace std;
const int Max = 5;

double * fill_array(double* arBegin, double* arEnd);
void show_array(double* arBegin, double* arEnd); 
void revalue(double r, double* arBegin, double* arEnd);
int main()
{
	double properties[Max];
	double* arEnd = fill_array(properties, properties + Max);

	show_array(properties, arEnd);
	if (arEnd != properties)
	{
		cout << "Enter revaluation factor: "; 
		double factor;
		while (!(cin >> factor)) 
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: "; 
		}
		revalue(factor, properties, arEnd);
		show_array(properties, arEnd);
	}
		
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}
double* fill_array(double* arBegin, double* arEnd)
{
	double temp;
	int i = 0;
	double* ptr;
	for (ptr = arBegin; ptr != arEnd; ptr++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;

		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n"; 
			break;
		}
		else if (temp < 0) 
			break;
		*ptr = temp;
	}
	return ptr;
}

void show_array(double* arBegin, double* arEnd)
{
	int i = 0;
	for (double* ptr = arBegin; ptr != arEnd; ptr++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << *ptr << endl;
	}
}

void revalue(double r, double* arBegin, double* arEnd)
{
	double* pt;
	for (pt = arBegin; pt != arEnd; pt++)
		*pt *= r;
}


