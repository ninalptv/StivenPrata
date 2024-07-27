//Следующее упражнение позволит попрактиковаться в написании функций,
//работающих с массивами и структурами.Ниже представлен каркас программы.
//Дополните его функциями, описанными в комментариях.
//#include <iostream>
//using namespace std;
//const int SLEN =
//30;
//struct student {
//	char fullname[SLEN];
//	char hobby[SLEN];
//	int ooplevel;
//};
//// getinfo() принимает два аргумента: указатель на первый элемент
//// массива структур student и значение int, представляющее
//// количество элементов в массиве. Функция запрашивает и
//// сохраняет данные о студентах. Ввод прекращается либо после
//// наполнения массива, либо при вводе пустой строки в качестве
//// имени студента. Функция возвращает действительное количество
////введенных элементов.
//int getinfо(student pa[], int n);
//// display]. () принимает в качестве аргумента структуру student
//// и отображает ее содержимое.
//void displayl(student st);
//// display2() принимает адрес структуры student в качестве аргумента
//// и отображает ее содержимое,
//void display2(const student*
//	ps);
//// display3() принимает указатель на первый элемента массива
//// структур student и количество элементов в этом массиве и
//// отображает содержимое всех структур в массиве,
//void display3(const student pa[], int n);
//int main()
//{
//	cout « "Enter class size: ";
//	int class_size;
//	cin >> class_size;
//	while (cin.getO != '\n')
//		continue;
//		student *
//		ptr_stu =
//		new student[class_size];
//	int entered =
//		getinfо(ptr_stu, class_size);
//	for (int i =
//		0; i < entered; i + +)
//	{
//		displayl(ptr_stu[i]);
//		display2(&ptr_stu[i]);
//	}
//	display3(ptr_stu, entered);
//	delete[] ptr_stu;
//	cout << "Done\n";
//	return 0;
//}
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfо(student pa[], int n);
void display1(student st);
void display2(const student*ps);
void display3(const student pa[], int n);
int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student *ptr_stu =new student[class_size];
	int entered = getinfо(ptr_stu, class_size);
	for (int i =0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfо(student pa[], int n)
{
	int i = 0;
	for (i; i < n; i++)
	{
		cout << "Enter " << i + 1 << " student: " << endl;
		cout << "Enter your fullname : ";
		cin.getline(pa[i].fullname, SLEN);
		if (strlen(pa[i].fullname) == 0)
			break;
		else
		{
			cout << "Enter your hobby : ";
			cin.getline(pa[i].hobby, SLEN);
			cout << "Enter your level : ";
			cin >> pa[i].ooplevel;
			cin.ignore();
		}
		
	}
	return i;
}
void display1(student st)
{
	cout << "display1\n";
	cout <<"Fullname: " << st.fullname << endl;
	cout <<"Hobby: " << st.hobby << endl;
	cout <<"Ooplevel: " << st.ooplevel << endl<<endl;
}
void display2(const student* ps)
{
	cout << "display2\n";
	cout << "Fullname: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->ooplevel << endl << endl;

}
void display3(const student pa[], int n)
{
	cout << "display3\n";
	for(int i=0;i<n;i++)
	{
		cout << "Fullname: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "Ooplevel: " << pa[i].ooplevel << endl << endl;
	}
	
}