#include<iostream>
using namespace std;
int main()
{
	//选择结构——switch语句
	//电影打分
	//10~9 经典
	//8~7 非常好
	//6~5 一般
	//5以下 烂片
	cout << "请给电影打分" << endl;
	int score = 0;
	cin >> score;
	cout << "您打的分数是" << score << endl;
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;  //跳出分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为这部电影非常好" << endl;
		break;
	case 7:
		cout << "您认为这部电影非常好" << endl;
		break;
	case 6:
		cout << "您认为这部电影一般" << endl;
		break;
	case 5:
		cout << "您认为这部电影一般" << endl;
		break;
	default:
		cout << "您认为这是一部烂片" << endl;
		break;
	}
	system("pause");
	return 0;