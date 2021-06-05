#include<iostream>
using namespace std;

//常量定义方法
//1.#define 宏常量
//2.const修饰的变量

//1.#define 宏常量
#define day 7
//constexpr auto day = 7;

int main()
{
	//Day = 14; //错误，Day是常量，一旦修改就会报错
	cout << "一周有" << day << "天" << endl;
	//2.const修饰的变量
	const int month = 12;
	//month = 12; //错误，month是常量，一旦修改就会报错
	cout << "一年有" << month << "月" << endl;
	system("pause");
	return 0;
}