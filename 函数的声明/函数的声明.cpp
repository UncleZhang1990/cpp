#include<iostream>
using namespace std;

//函数的声明
//提前告诉编译器函数的存在
//声明可以写多次，定义只能写一次
int max(int a, int b);

int main()
{
	int a = 0;
	int b = 0;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	cout << "最大的是" << max(a, b) << endl;
	system("pause");
	return 0;
}

//比较函数，实现两个整形数字进行比较，返回较大的
int max(int a, int b)
{
	return a > b ? a : b;
}