#include<iostream>
using namespace std;
int main()
{
	//ѡ��ṹ����������if���
	//��������600��һ��
	//��������500������
	//��������400������
	//����С�ڵ���400��δ���ϱ���
	int score = 0;
	cout << "���������" << endl;
	cin >>score;
	cout << "���ĳɼ�Ϊ" << score << endl;
	if (score > 600)
	{
		cout << "��������һ������ϲ��" << endl;
	}
	else if (score > 500)
	{
		cout << "�������˶�������ϲ��" << endl;
	}
	else if (score > 400)
	{
		cout << "����������������ϲ��" << endl;
	}
	else
	{
		cout << "��δ���ϱ��ƣ��ٽ�������" << endl;
	}
	system("pause");
	return 0;
}