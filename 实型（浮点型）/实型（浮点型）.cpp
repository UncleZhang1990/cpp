#include<iostream>
using namespace std;
int main()
{
	//默认情况下，输出一个小数，会显示6位有效数字

	//1.float(4)
	float f1 = 3.1415926f;  // f 代表 float
	cout << "f1 = " << f1 << endl;

	//2.double(8)
	double f2 = 3.1415926;
	cout << "f2 = " << f2 << endl;

	//统计float、double
	cout << "float占用的内存空间：" << sizeof(float) << endl;
	cout << "double占用的内存空间：" << sizeof(double) << endl;

	//科学计数法
	/*
	在科学计数法中，
	e后面是正数，例如 3e2 ，表示 3 * 10 ^ 2
	e后面是负数，例如 3e-2 ，表示 3 * 0.1 ^ 2
	*/
	float f3 = 3e2;
	cout << "f3 = " << f3 << endl;
	float f4 = 3e-2;
	cout << "f4 = " << f4 << endl;

	system("pause");

	return 0;
}