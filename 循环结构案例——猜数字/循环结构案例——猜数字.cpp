#include<iostream>
//添加系统时间头文件
#include<ctime>
using namespace std;
int main()
{
	//循环结构案例——猜数字
	//添加随机数种子，利用系统时间形成随机数
	srand((unsigned)time(NULL));
	//rand() % 100 + 1;  生成0+1~99+1之间的随机数
	int num = rand() % 100 + 1;  //要猜的数字
	//cout << num << endl;
	int val = 0;  //猜出的数字
	int err_time = 0;  //错误次数
	while (1)
	{
		if (err_time > 4)
		{
			cout << "错误次数过多" << endl;
			break;
		}
		cin >> val;
		if (val > num)
		{
			cout << "过大" << endl;
			err_time++;
		}
		else if (val < num)
		{
			cout << "过小" << endl;
			err_time++;
		}
		else if (val = num)
		{
			cout << "对了" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}