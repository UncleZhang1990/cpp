#include"swap.h"
//定义
void swap(int a, int b)
{
	cout << "交换前：a=" << a << " b=" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "交换后：a=" << a << " b=" << b << endl;
}