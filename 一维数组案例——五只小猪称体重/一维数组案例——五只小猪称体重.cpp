#include<iostream>
using namespace std;
int main()
{
	//一维数组案例——五只小猪称体重
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "最重的小猪:" << max << "斤" << endl;
	switch (max)
	{
	case 300:
		cout << "1号小猪最重" << endl;
		break;
	case 350:
		cout << "2号小猪最重" << endl;
		break;
	case 200:
		cout << "3号小猪最重" << endl;
		break;
	case 400:
		cout << "4号小猪最重" << endl;
		break;
	case 250:
		cout << "5号小猪最重" << endl;
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}