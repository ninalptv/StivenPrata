//3. ����� ������� ��������� ���������� ��������� :
//struct box
//{
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float volume;
//};
//�.�������� �������, ����������� ��������� box �� �������� �
//������������ ��� �� �����.
//�.�������� �������, ����������� ����� ��������� box � ���������������
//�������� ����� volume ������ ������������ ��������� ���� ������.
//�.�������� ������� ���������, ������� ���������� ��� ��� �������.
#include <iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
//a.
void showBox( box);
//�.
void FooVolume(box *ptr);
void main()
{
	box b1{ "nina",7,3,1,3 };
	showBox(b1);
	FooVolume(&b1);
	showBox(b1);

}
void showBox( box b)
{
	cout << "marker = " << b.maker << endl;
	cout << "height = " << b.height << endl;
	cout << "width = " << b.width << endl;
	cout << "lenght = " << b.length << endl;
	cout << "volume = " << b.volume << endl;
}
void FooVolume(box* ptr)
{
	ptr->volume = ptr->height * ptr->width * ptr->length;
}