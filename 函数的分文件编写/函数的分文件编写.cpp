#include<iostream>
#include"swap.h"
using namespace std;

//�����ķ��ļ���д
//�����������ֵĺ���
//����
//void swap(int a, int b);
//����
/*void swap(int a, int b)
{
	cout << "����ǰ��a=" << a << " b=" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "������a=" << a << " b=" << b << endl;
}*/
//1.������׺Ϊ.h��ͷ�ļ�
//2.������׺Ϊ.cpp��Դ�ļ�
//3.��ͷ�ļ���д��������
//4.��Դ�ļ���д��������
int main()
{
	int a = 0;
	int b = 0;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	swap(a, b);
	system("pause");
	return 0;
}