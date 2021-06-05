#include<iostream>
using namespace std;
//函数的定义
//1.返回值类型
//2.函数名
//3.参数列表
//4.函数体语句
//5.return表达式
//语法：
// 返回值类型 函数名(参数列表)
// {
//       函数体语句;
//       return 表达式;
// }
//要求：传入两个整形，计算他们的和
//函数定义时，num1,num2没有实际意义，为形参（形式参数）
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	//函数的调用
	int a = 0;
	int b = 0;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	//调用用函数时，实参的值传递给形参
	int c = add(a, b);
	cout << "结果为" << c << endl;
	system("pause");
	return 0;
}