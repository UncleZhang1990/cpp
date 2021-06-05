#include<iostream>
using namespace std;
int main()
{
	//选择结构案例——三目运算符
	//三目运算符：表达式1 ? 表达式2 : 表达式3
	//如果表达式1成立，执行表达式2，否则执行表达式3
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;
	cout << "-------------分割线-------------" << endl;
	//在C++中，三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}