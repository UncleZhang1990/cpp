#include<iostream>
using namespace std;
int main()
{
	//ѡ��ṹ����������Ŀ�����
	//��Ŀ����������ʽ1 ? ���ʽ2 : ���ʽ3
	//������ʽ1������ִ�б��ʽ2������ִ�б��ʽ3
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;
	cout << "-------------�ָ���-------------" << endl;
	//��C++�У���Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}