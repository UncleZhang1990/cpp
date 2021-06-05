#include<iostream>
using namespace std;

int main()
{
	//整型：short(2)   int（4）   long（4）   long long（8）
	//可以利用sizeof函数求出数据类型所占内存大小
	//语法：sizeof( 数据类型 / 变量 )

	short num1 = 10;
	cout << "short占用的内存为：" << sizeof(short) << endl;
	cout << "num1占用的内存为：" << sizeof(num1) << endl;
	cout << endl;

	int num2 = 10;
	cout << "int占用的内存为：" << sizeof(int) << endl;
	cout << "num2占用的内存为：" << sizeof(num2) << endl;
	cout << endl;

	long num3 = 10;
	cout << "long占用的内存为：" << sizeof(long) << endl;
	cout << "num3占用的内存为：" << sizeof(num3) << endl;
	cout << endl;

	long long num4 = 10;
	cout << "long long占用的内存为：" << sizeof(long long) << endl;
	cout << "num4占用的内存为：" << sizeof(num4) << endl;
	cout << endl;

	system("pause");

	return 0;
}