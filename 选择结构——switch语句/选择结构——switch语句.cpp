#include<iostream>
using namespace std;
int main()
{
	//ѡ��ṹ����switch���
	//��Ӱ���
	//10~9 ����
	//8~7 �ǳ���
	//6~5 һ��
	//5���� ��Ƭ
	cout << "�����Ӱ���" << endl;
	int score = 0;
	cin >> score;
	cout << "����ķ�����" << score << endl;
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;  //������֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ�ⲿ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ�ⲿ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ�ⲿ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ�ⲿ��Ӱһ��" << endl;
		break;
	default:
		cout << "����Ϊ����һ����Ƭ" << endl;
		break;
	}
	system("pause");
	return 0;