#include<iostream>
using namespace std;

//����������
//��ǰ���߱����������Ĵ���
//��������д��Σ�����ֻ��дһ��
int max(int a, int b);

int main()
{
	int a = 0;
	int b = 0;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	cout << "������" << max(a, b) << endl;
	system("pause");
	return 0;
}

//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��
int max(int a, int b)
{
	return a > b ? a : b;
}