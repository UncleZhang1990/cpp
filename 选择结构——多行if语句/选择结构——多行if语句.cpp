#include<iostream>
using namespace std;
int main()
{
	//ѡ��ṹ��������if���
	//���뿼�Է������������600����Ϊ����һ������������ӡ��δ����һ����
	int score = 0;
	cout << "�����뿼�Գɼ�" << endl;
	cin >> score;
	cout << "������ķ���Ϊ" << score << endl;
	if (score > 600)  //����600��ִ�����´���
	{
		cout << "����һ������ϲ��" << endl;
	}
	else  //С�ڻ����600��ִ�����´���
	{
		cout << "δ����һ��" << endl;
	}
	system("pause");
	return 0;
}