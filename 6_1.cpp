//�������� ���������, ������� ������ ������������ ���� �� ������� @ �
//��������� ���, �� ����������� ���������� ����, ���������� ������ ����� ��������
//�������� � ����� ������� �������� � ��������. (�� �������� � ���������
//	������� cctype.)
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    cout << "Enter text, and type @ to terminate input: ";
    for (char user_input{ '0' }; user_input != '@' && cin.get(user_input);)
    {
        if (islower(user_input))
        {
            user_input = toupper(user_input);
        }
        else if (isupper(user_input))
        {
            user_input = tolower(user_input);
        }
        else if (isdigit(user_input))
        {
            cin.get(user_input);
            continue;
        }
        cout << user_input;
    }
    cout << '\n';
	return 0;
}