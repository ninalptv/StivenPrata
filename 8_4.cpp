//���� ������������ ����� ��������� ��������� :
//#include <iostream>
//using namespace std;
//#include <cstring> // ��� strlen(), strcpyO
//struct stringy {
//	char* str; // ��������� �� ������
//	int ct; // ����� ������ (�� ������ ������� '\0')
//}; 
//// ����� ����������� ��������� ������� set() � show()
//int main()
//{
//	stringy beany;
//	char testing[] = "Reality isn't what it used to be.";
//	set(beany, testing); // ������ ���������� �������� ������,
//	// �������� ������������ ��� �������� ����� testing,
//	// ���������� ������� ���� str ��������� beany ��� ���������
//	// �� ����� ����, �������� testing � ����� ���� �
//	// ������� ������� ct ��������� beany
//	show(beany); // ������� ��������� ���� ��������� ���� ���
//	show(beany, 2); // ������� ��������� ���� ��������� ��� ����
//	testing[0] ='D';
//	testing[1] = 'u';
//	show(testing); // ������� ����� testing ���� ���
//	show(testing, 3); // ������� ������ testing ��� ����
//	show("Done!");
//	return 0;
//}
//��������� ���������, ������ ��������������� ������� � ���������.��������
//��������, ��� � ��������� ������ ���� ��� ������� show(), � ������ ��
//��� ���������� ��������� �� ���������.��� ����������, ����������� const.
//������� set() ������ ������������ �������� new ��� ���������
//������������ ������������ ������ ��� �������� �������� ������.������������ �����
//������ ���������� �������, ����������� ��� �������������� � ����������
//�������. (� ����������� �� ������������� �����������, ����� ������������
//	�������� ����� ������������ ������ � ������� ��������� using.)

#include <iostream>
#include <string> // ��� strlen(), strcpyO
struct stringy {
	char* str; // ��������� �� ������
	int ct; // ����� ������ (�� ������ ������� '\0')

};
// ����� ����������� ��������� ������� set() � show()
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