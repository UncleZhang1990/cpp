#include<iostream>
using namespace std;

int main()
{
	//���ͣ�short(2)   int��4��   long��4��   long long��8��
	//��������sizeof�����������������ռ�ڴ��С
	//�﷨��sizeof( �������� / ���� )

	short num1 = 10;
	cout << "shortռ�õ��ڴ�Ϊ��" << sizeof(short) << endl;
	cout << "num1ռ�õ��ڴ�Ϊ��" << sizeof(num1) << endl;
	cout << endl;

	int num2 = 10;
	cout << "intռ�õ��ڴ�Ϊ��" << sizeof(int) << endl;
	cout << "num2ռ�õ��ڴ�Ϊ��" << sizeof(num2) << endl;
	cout << endl;

	long num3 = 10;
	cout << "longռ�õ��ڴ�Ϊ��" << sizeof(long) << endl;
	cout << "num3ռ�õ��ڴ�Ϊ��" << sizeof(num3) << endl;
	cout << endl;

	long long num4 = 10;
	cout << "long longռ�õ��ڴ�Ϊ��" << sizeof(long long) << endl;
	cout << "num4ռ�õ��ڴ�Ϊ��" << sizeof(num4) << endl;
	cout << endl;

	system("pause");

	return 0;
}