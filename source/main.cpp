//���������� ���������� ��������� ������, ���������� ��������� ��������� � ��������[][], �������� + , ��������� * �
// ������������ =. ����� ����� cout, ��������� ������� ����������, ������� A ����������� ���������� ������� �� 0 �� 5 ����� ������� A.init()
#include <iostream>
#include "class.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	matrix a(3, 3);
	a.init();
	cout << a;
	cout << a[0][0];

}
