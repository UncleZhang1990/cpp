#include<iostream>
using namespace std;
int main()
{
	//const����ָ��
	//1.const����ָ��
	int a = 10;
	int b = 10;
	const int* p = &a;  //ָ���ֵ�����Ըģ�ָ����Ը�
	//*p = 20;
	p = &b;
	//2.const���γ���
	int* const p2 = &a;  //ָ���ֵ���Ըģ�ָ�򲻿��Ը�
	//*p2 = &b;
	*p2 = 20;
	//3.const����ָ��ͳ���
	const int* const p3 = &a;  //ָ���ֵ�����Ըģ�ָ�򲻿��Ը�
	//p3 = &b;
	//*p3 = 20;
	system("pause");
	return 0;
}