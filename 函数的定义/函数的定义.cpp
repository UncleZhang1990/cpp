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
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	system("pause");
	return 0;
}