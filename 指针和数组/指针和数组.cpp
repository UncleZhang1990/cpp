#include<iostream>
using namespace std;
int main()
{
	//ָ�������
	//����ָ����������е�Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��Ϊ" << arr[0] << endl;
	int* p = arr;  //arr����������׵�ַ
	cout << "����ָ����ʵ�һ��Ԫ��Ϊ" << *p << endl;
	cout << "---------------------------" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "����ָ����ʵ�"<<i+1<<"��Ԫ��Ϊ" << *p << endl;
		p++;  //ָ�����4�ֽ�
	}
	system("pause");
	return 0;
}