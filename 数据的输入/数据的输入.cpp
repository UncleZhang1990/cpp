#include<iostream>
#include<string>  //stringͷ�ļ�
using namespace std;

int main()
{
	//1.����
	int a = 0;
	cout << "��Ϊ����a��ֵ��" << endl;
	cin >> a;
	cout << "���ͱ���a=" << a << endl;

	//2.������
	float f = 3.14f;
	cout << "��Ϊ������f��ֵ��" << endl;
	cin >> f;
	cout << "�����ͱ���f=" << f << endl;

	//3.�ַ���
	char ch = 'a';
	cout << "��Ϊ�ַ���ch��ֵ��" << endl;
	cin >> ch;
	cout << "�ַ��ͱ���ch=" << ch << endl;

	//4.�ַ�����
	string str = "hello";
	cout << "��Ϊ�ַ�����str��ֵ��" << endl;
	cin >> str;
	cout << "�ַ����ͱ���str=" << str << endl;

	//5.������
	bool flag = false;
	cout << "��Ϊ������flag��ֵ��" << endl;
	cin >> flag;  //bool���ͣ�ֻҪ�Ƿ�0��ֵ�������桱
	cout << "�����ͱ���flag=" << flag << endl;

	system("pause");

	return 0;
}