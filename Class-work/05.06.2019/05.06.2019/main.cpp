//� ����� ��������� ���� Array ������� ��������������[], () :
//	[] - ������� ������� �� �������� ��������
//	() - ������ �� �������� ������ �� ��������� ��������

#include <iostream>
#include "arr.h"
using namespace std;

int main()
{
	ARR obj(33,5);
	cout << obj[1]<<endl;
	obj(5);
	obj.show();
	char* b;
	int tmp=0;
	tmp = (int)obj;
	cout << tmp;
	system("pause");
	return 0;
}