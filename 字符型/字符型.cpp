#include<iostream>
using namespace std;

int main()
{
	//1.�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;

	//2.�ַ��ͱ�����ռ�ڴ��С
	cout << "�ַ��ͱ�����ռ�ڴ�:" << sizeof(char) << "�ֽ�" << endl;

	//3.�ַ��ͱ�����������
	//char ch2 = "b";  //�����ַ��ͱ�����ʱ��Ҫ�õ�����
	//char ch3 = 'abcefg';  //�����ַ��ͱ�����ʱ�򣬵�������ֻ����һ���ַ�

	//4.�ַ��ͱ�����Ӧ��ASCII����
	cout << (int)ch << endl;  //(int)ch   (int)���ַ���ǿ��ת��Ϊ����

	system("pause");

	return 0;
}