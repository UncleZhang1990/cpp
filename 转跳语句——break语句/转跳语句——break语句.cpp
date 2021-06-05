#include<iostream>
using namespace std;
int main()
{
	//转跳语句——break语句
	//1.在switch语句中
	cout << "请选择副本难度" << endl;
	cout << "1.普通" << endl;
	cout << "2.中等" << endl;
	cout << "3.困难" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "普通难度" << endl;
		break;
	case 2:
		cout << "中等难度" << endl;
		break;
	case 3:
		cout << "困难难度" << endl;
		break;
	default:
		break;
	}
	cout << "===============================================" << endl;
	//2.在循环语句中
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	cout << "===============================================" << endl;
	//3.在嵌套循环语句
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