#include<iostream>
using namespace std;
int main()
{
	//ָ����ռ�õ��ڴ�ռ�
	int a = 10;
	int* p = &a;
	//��32λ����ϵͳ��ָ��ռ4�ֽڣ���64λ����ϵͳ��ָ��ռ8�ֽڣ�����ʲô��������
	cout << "sizeof (int*) = " << sizeof(int*) << endl;
	cout << "sizeof (float*) = " << sizeof(float*) << endl;
	cout << "sizeof (double*) = " << sizeof(double*) << endl;
	cout << "sizeof (char*) = " << sizeof(char*) << endl;
	cout << "sizeof (long*) = " << sizeof(long*) << endl;
	cout << "sizeof (long long*) = " << sizeof(long long*) << endl;
	system("pause");
	return 0;
}