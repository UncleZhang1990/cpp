#include<iostream>
using namespace std;
int main()
{
	//选择结构——多条件if语句
	//分数大于600，一本
	//分数大于500，二本
	//分数大于400，三本
	//分数小于等于400，未考上本科
	int score = 0;
	cout << "请输入分数" << endl;
	cin >>score;
	cout << "您的成绩为" << score << endl;
	if (score > 600)
	{
		cout << "您考上了一本，恭喜！" << endl;
	}
	else if (score > 500)
	{
		cout << "您考上了二本，恭喜！" << endl;
	}
	else if (score > 400)
	{
		cout << "您考上了三本，恭喜！" << endl;
	}
	else
	{
		cout << "您未考上本科，再接再厉！" << endl;
	}
	system("pause");
	return 0;
}