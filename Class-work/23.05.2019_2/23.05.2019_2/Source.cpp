//�������� ���� SmartArray, ���� ���� ������������ ����� � �������� �������� / �������� �������, ����������� �����.
//
//���� ���� ������ � ��� ��� ��� ������������� ������ :
//int * arr;
//int size;
//
//�� ������ :
//�������� ������� � �����(���������� ����� �������)
//�������� �������(���������� ������ �������� ��� ���������)
//������� ����� �� �����
//
//� ���� ������ ���� ��������� ������� ������������ :
//����������� �� ������������ - �� ���� ������������� �������� ���(arr = nullptr, size = 0)
//�������������� ������������ :
//1 - ����������� ���� ������ ��������(int value) �� �������(int size) - ������� ����� � �������� ������� size �� �������� �� ��������� value
//2 - ����������� ���� ������ �����(int* array) �� ���� �����(int size) - ������� ����� ������� size �� ����� �� ��� � ���������� ������ array
#include <iostream>
#include <string>
#include "smart_array.h"
using namespace std;

int main()
{
	SMART_CLASS obj(5,4);
	while (true)
	{
		//system("cls");
		int choise = 0;
		
		cout << "1- Show arr\n2- add elem\n3- del elem\n0- Exit\n";
		cin >> choise;
		switch (choise)
		{
		case 1:
			obj.show_arr();
			system("pause");
			break;
		case 2:
			obj.add_elem();
			break;
		case 3:
			obj.del_elem();
			break;
		case 0:
			return 0;
			break;
		default:
			cout << "Error!\n";
			break;
		}
	}
	return 0;
}