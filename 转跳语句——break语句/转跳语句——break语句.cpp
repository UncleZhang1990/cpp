#include<iostream>
using namespace std;
int main()
{
	//ת����䡪��break���
	//1.��switch�����
	cout << "��ѡ�񸱱��Ѷ�" << endl;
	cout << "1.��ͨ" << endl;
	cout << "2.�е�" << endl;
	cout << "3.����" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "��ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "�е��Ѷ�" << endl;
		break;
	case 3:
		cout << "�����Ѷ�" << endl;
		break;
	default:
		break;
	}
	cout << "===============================================" << endl;
	//2.��ѭ�������
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	cout << "===============================================" << endl;
	//3.��Ƕ��ѭ�����
	for (int a = 1; a < 11; a++)
	{
		if (a == 5)
		{
			break;
		}
		for (int b = 1; b < 11; b++)
		{
			if (b == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}