#include<iostream>
using namespace std;
int main()
{
	//1.ǰ�õ���
	int a = 10;
	++a;
	cout << "a=" << a << endl;

	//2.���õ���
	int b = 10;
	b++;
	cout << "b=" << b << endl;

	//3.ǰ������õ�����
	//ǰ�õ��������ñ���+1��Ȼ����б��ʽ����
	int a2 = 10;
	int b2 = 10;
	cout << ++a2 * b2 << endl;

	//���õ��������ñ������б��ʽ���㣬��+1
	int a3 = 10;
	int b3 = 10;
	cout << a3++ * b3 << endl;
	cout << "a3=" << a3 << endl;

	system("pause");

	return 0;
}