#include<iostream>
using namespace std;
int main()
{
	//选择结构——多行if语句
	//输入考试分数，如果大于600，即为考上一本，输出否则打印“未考上一本”
	int score = 0;
	cout << "请输入考试成绩" << endl;
	cin >> score;
	cout << "您输入的分数为" << score << endl;
	if (score > 600)  //大于600，执行以下代码
	{
		cout << "考上一本，恭喜！" << endl;
	}
	else  //小于或等于600，执行以下代码
	{
		cout << "未考上一本" << endl;
	}
	system("pause");
	return 0;
}