#include<iostream>
using namespace std;
//�����Ķ���
//1.����ֵ����
//2.������
//3.�����б�
//4.���������
//5.return���ʽ
//�﷨��
// ����ֵ���� ������(�����б�)
// {
//       ���������;
//       return ���ʽ;
// }
//Ҫ�󣺴����������Σ��������ǵĺ�
//��������ʱ��num1,num2û��ʵ�����壬Ϊ�βΣ���ʽ������
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	//�����ĵ���
	int a = 0;
	int b = 0;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	//�����ú���ʱ��ʵ�ε�ֵ���ݸ��β�
	int c = add(a, b);
	cout << "���Ϊ" << c << endl;
	system("pause");
	return 0;
}