/*�������� ���� Array, ��� ������������ ������ ��������� ����. Array - �� ���� ���������� ����������� ������.

� ���� ����������� ���������� �� �������� ������������:
�����������, ���� ���������� �������� �� ����� � �������� ����� ������ ������ �� ��������� ���� ��������� ���������
����������� ��������� ��� ��������� ��ﳿ ����� ������

������ �����:
�������� ���� ������
�������� ����� �� ������
������ ������������ ������� � �����
������ ���������� ������� � �����*/

#include<iostream>
#include<string>
#include"Array.h"

using namespace std;

int main()
{
	ARRAY obj(4,5,5);
	obj.show();
	cout << endl;
	obj.add_row();
	obj.show();
	cout << endl;
	cout<<obj.max_elem()<<endl;
	cout << obj.min_elem() << endl;



	system("pause");
	return 0;
}