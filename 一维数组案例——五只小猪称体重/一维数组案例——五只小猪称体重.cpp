#include<iostream>
using namespace std;
int main()
{
	//һά���鰸��������ֻС�������
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "���ص�С��:" << max << "��" << endl;
	switch (max)
	{
	case 300:
		cout << "1��С������" << endl;
		break;
	case 350:
		cout << "2��С������" << endl;
		break;
	case 200:
		cout << "3��С������" << endl;
		break;
	case 400:
		cout << "4��С������" << endl;
		break;
	case 250:
		cout << "5��С������" << endl;
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}