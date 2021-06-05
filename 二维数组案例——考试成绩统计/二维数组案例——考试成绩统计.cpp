#include<iostream>
#include<string>
using namespace std;
int main()
{
	//二维数组案例——考试成绩统计
	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string name[3] = { "张三","李四","王五" };
	string subject[3] = { "语文","数学","英语" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		cout << name[i] << ":" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << subject[j] << ";";
			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		cout << "总分：" << sum;
		cout << endl;
	}
	system("pause");
	return 0;
}