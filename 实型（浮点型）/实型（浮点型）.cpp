#include<iostream>
using namespace std;
int main()
{
	//Ĭ������£����һ��С��������ʾ6λ��Ч����

	//1.float(4)
	float f1 = 3.1415926f;  // f ���� float
	cout << "f1 = " << f1 << endl;

	//2.double(8)
	double f2 = 3.1415926;
	cout << "f2 = " << f2 << endl;

	//ͳ��float��double
	cout << "floatռ�õ��ڴ�ռ䣺" << sizeof(float) << endl;
	cout << "doubleռ�õ��ڴ�ռ䣺" << sizeof(double) << endl;

	//��ѧ������
	/*
	�ڿ�ѧ�������У�
	e���������������� 3e2 ����ʾ 3 * 10 ^ 2
	e�����Ǹ��������� 3e-2 ����ʾ 3 * 0.1 ^ 2
	*/
	float f3 = 3e2;
	cout << "f3 = " << f3 << endl;
	float f4 = 3e-2;
	cout << "f4 = " << f4 << endl;

	system("pause");

	return 0;
}