#include<iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;
//const���ε�ȫ�ֱ�����ȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;
int main()
{
	//ȫ����

	//ȫ�ֱ�������̬����������

	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << (int)&b << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ��" << (int)&g_b << endl;
	//��̬����
	//����ͨ����ǰ��static
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַ��" << (int)&s_b << endl; \
	//����
	//�ַ�������
	cout << "�ַ��������ĵ�ַ��" << (int)&"Hello World" << endl;
	//const���εı���
	//const���ε�ȫ�ֱ�����const���εľֲ�����
	cout << "const���ε�ȫ�ֳ���c_g_a�ĵ�ַ��" << (int)&c_g_a << endl;
	cout << "const���ε�ȫ�ֳ���c_g_b�ĵ�ַ��" << (int)&c_g_b << endl;
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "const���εľֲ�����c_l_a�ĵ�ַ��" << (int)&c_l_a << endl;
	cout << "const���εľֲ�����c_l_b�ĵ�ַ��" << (int)&c_l_b << endl;
	system("pause");
	return 0;
}