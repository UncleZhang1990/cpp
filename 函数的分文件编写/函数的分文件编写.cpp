#include<iostream>
#include"swap.h"
using namespace std;

//函数的分文件编写
//交换两个数字的函数
//声明
//void swap(int a, int b);
//定义
/*void swap(int a, int b)
{
	cout << "交换前：a=" << a << " b=" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "交换后：a=" << a << " b=" << b << endl;
}*/
//1.创建后缀为.h的头文件
//2.创建后缀为.cpp的源文件
//3.在头文件中写函数声明
//4.在源文件中写函数定义
int main()
{
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