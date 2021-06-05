#include<iostream>
using namespace std;
int main()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;  //两数相除，结果为整数，去除小数部分

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	double d3 = 0.5;
	double d4 = 0.225;
	cout << d3 / d4 << endl;

	system("pause");

	return 0;
}