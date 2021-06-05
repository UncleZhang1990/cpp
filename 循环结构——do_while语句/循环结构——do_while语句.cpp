#include<iostream>
using namespace std;
int main()
{
	//循环结构——do_while语句
	//输出0~9共10个数字
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	}
	//do...while会执行一次循环语句，再判断条件
	while(num < 10);
	system("pause");
	return 0;
}