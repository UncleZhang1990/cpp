#include<iostream>
using namespace std;
int main()
{
	//һά���顪��������
	//��������;��
	//1.����ͨ��������ͳ����������ռ���ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ���ڴ��С:" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ��С:" << sizeof(arr[0]) << endl;
	cout << "����Ԫ�ظ���:" << sizeof(arr) / sizeof(arr[0]) << endl;
	//2.����ͨ���������鿴�����׵�ַ
	cout << "�����׵�ַ��16���ƣ�:" << arr << endl;
	cout << "�����׵�ַ��10���ƣ�:" << (int)arr << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "��" << (i + 1) << "��Ԫ���׵�ַ��16���ƣ�:" << &arr[i] << endl;
		cout << "��" << (i + 1) << "��Ԫ���׵�ַ��10���ƣ�:" << (int)&arr[i] << endl;
	}
	//�������ǳ����������޸�
	system("pause");
	return 0;
}