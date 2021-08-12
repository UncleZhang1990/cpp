#include<iostream>
using namespace std;

int main01()
{
	//����
	//�������� &����=ԭ��;

	int a = 10;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}

int main02()
{
	int a = 10;
	//���õĹ���
	//1.���ñ����ʼ��
	//int& b;  //�������ñ����ʼ��
	int& b = a;

	//2.�����ڳ�ʼ���󲻿ɸ���
	int c = 20;
	b = c;  //��ֵ���������Ǹ�������

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}

//��������������
//��������

//1.ֵ����
void mySwap01(int a, int b)
{
	cout << "����ǰ..." << "a=" << a << "  " << "b=" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "������..." << "a=" << a << "  " << "b=" << b << endl;
}

//2.ָ�봫��
void mySwap02(int* p_a, int* p_b)
{
	cout << "����ǰ..." << "a=" << *p_a << "  " << "b=" << *p_b << endl;
	int temp = *p_a;
	*p_a = *p_b;
	*p_b = temp;
	cout << "������..." << "a=" << *p_a << "  " << "b=" << *p_b << endl;
}

//3.���ô���
void mySwap03(int &a, int &b)
{
	cout << "����ǰ..." << "a=" << a << "  " << "b=" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "������..." << "a=" << a << "  " << "b=" << b << endl;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "1.ֵ����" << endl;
	mySwap01(a, b);
	cout << endl;
	cout << "2.ָ�봫��" << endl;
	mySwap02(&a, &b);
	cout << endl;
	cout << "3.���ô���" << endl;
	mySwap03(a, b);


	system("pause");
	return 0;
}