#include<iostream>
using namespace std;
int main()
{
	//ѡ��ṹ ����if���
	//����û�����ķ�������600����Ϊ����һ������ʾ
	int score = 0;
	cout << "������һ������" << endl;
	cin >> score;
	cout << "���ķ���Ϊ��" << score << endl;
	if (score > 600)
	{
		cout << "��ϲ��������һ����ѧ" << endl;
	}
	system("pause");
	return 0;
}