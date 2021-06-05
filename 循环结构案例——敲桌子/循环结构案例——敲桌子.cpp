#include<iostream>
using namespace std;
int main()
{
	//循环结构案例——敲桌子
	for (int num = 1; num <= 100; num++)
	{
		if (num % 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else if (num / 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else if (num % 7 == 0)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}