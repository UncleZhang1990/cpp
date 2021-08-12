#include<iostream>
using namespace std;

int main01()
{
	//别名
	//数据类型 &别名=原名;

	int a = 10;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}

int main02()
{
	int a = 10;
	//引用的规则
	//1.引用必须初始化
	//int& b;  //错误引用必须初始化
	int& b = a;

	//2.引用在初始化后不可更改
	int c = 20;
	b = c;  //赋值操作，不是更改引用

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}

//引用做函数参数
//交换数字

//1.值传递
void mySwap01(int a, int b)
{
	cout << "交换前..." << "a=" << a << "  " << "b=" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "交换后..." << "a=" << a << "  " << "b=" << b << endl;
}

//2.指针传递
void mySwap02(int* p_a, int* p_b)
{
	cout << "交换前..." << "a=" << *p_a << "  " << "b=" << *p_b << endl;
	int temp = *p_a;
	*p_a = *p_b;
	*p_b = temp;
	cout << "交换后..." << "a=" << *p_a << "  " << "b=" << *p_b << endl;
}

//3.引用传递
void mySwap03(int &a, int &b)
{
	cout << "交换前..." << "a=" << a << "  " << "b=" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "交换后..." << "a=" << a << "  " << "b=" << b << endl;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "1.值传递" << endl;
	mySwap01(a, b);
	cout << endl;
	cout << "2.指针传递" << endl;
	mySwap02(&a, &b);
	cout << endl;
	cout << "3.引用传递" << endl;
	mySwap03(a, b);


	system("pause");
	return 0;
}