#include<iostream>
using namespace std;
int main()
{
	//��ά����������
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά�����ڴ�ռ�ռ�ã�" << sizeof(arr) << endl;
	cout << "��ά�����һ���ڴ�ռ�ռ�ã�" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ���ڴ�ռ�ռ�ã�" << sizeof(arr[0][0]) << endl;
	cout << "��ά����������" << sizeof(arr) / sizeof(arr[0]) << endl; 
	cout << "��ά����������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << "��ά�����׵�ַ��16���ƣ���" << arr << endl;
	cout << "��ά�����׵�ַ��10���ƣ���" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַ��16���ƣ���" << arr[0] << endl;
	cout << "��ά�����һ���׵�ַ��10���ƣ���" << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַ��16���ƣ���" << arr[1] << endl;
	cout << "��ά����ڶ����׵�ַ��10���ƣ���" << (int)arr[1] << endl;
	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			cout << "��ά�����" << a + 1 << "�е�" << b + 1 << "�е�ַ��16���ƣ���" << &arr[a][b] << endl;
			cout << "��ά�����" << a + 1 << "�е�" << b + 1 << "�е�ַ��10���ƣ���" << (int)&arr[a][b] << endl;
		}
	}
	system("pause");
	return 0;
}