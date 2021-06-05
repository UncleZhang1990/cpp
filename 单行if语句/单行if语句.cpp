#include<iostream>
using namespace std;
int main()
{
	//选择结构 单行if语句
	//如果用户输入的分数大于600，视为考上一本，显示
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;
	cout << "您的分数为：" << score << endl;
	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	system("pause");
	return 0;
}