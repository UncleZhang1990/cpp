#include"swap.h"
//����
void swap(int a, int b)
{
	cout << "����ǰ��a=" << a << " b=" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "������a=" << a << " b=" << b << endl;
}