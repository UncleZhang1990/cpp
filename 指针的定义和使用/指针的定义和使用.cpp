#include<iostream>
using namespace std;
int main()
{
	//指针的定义和使用
	//1.定义指针
	int a = 10;
	//指针定义语法：数据类型 * 指针变量
	int * p;
	//让指针记录变量a的地址
	p = &a;  //&取址符
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;
	//2.使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//解引用：* 指针
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;
	system("pause");
	return 0;
}