#include<iostream>
using namespace std;

//1.new�Ļ����﷨
int* func()
	{
		//�ڶ���������������
	    int* p = new int(10);
		return p;
	}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�����������ɳ���Ա�����ͷ�
	//��Ҫ�ͷŶ������ݣ���ʹ��delete�ؼ���
	delete p;

	//cout << *p << endl;  �ڴ��ѱ��ͷţ��ٲ������ǷǷ��������ᱨ��
}

//2.�ڶ�����new��������
void test02()
{
	//�ڶ�����������
	int* length = new int(10);
	int* arr = new int[*length];

	for (int i = 0; i < *length; i++)
	{
		arr[i] = i + 100;  //100~109
	}

	for (int i = 0; i < *length; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷ�����
	//�ͷ�����ʱҪ��[]
	delete[] arr;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}