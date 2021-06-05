#include<iostream>
using namespace std;
//定义函数：实现两个数字交换
//函数若不需要返回值，添加void，且不需要return表达式
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
}
int main()
{
	//值传递
	int a = 0;
	int b = 0;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	swap(a, b);
	system("pause");
	return 0;
}