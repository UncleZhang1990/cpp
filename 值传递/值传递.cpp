#include<iostream>
using namespace std;
//���庯����ʵ���������ֽ���
//����������Ҫ����ֵ�����void���Ҳ���Ҫreturn���ʽ
void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
}
int main()
{
	//ֵ����
	int a = 0;
	int b = 0;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	swap(a, b);
	system("pause");
	return 0;
}