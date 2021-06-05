#include<iostream>
using namespace std;
int main()
{
	//本质就是求余数
	int a1 = 10;
	int a2 = 3;
	cout << a1 % a2 << endl;

	int b1 = 10;
	int b2 = 20;
	cout << b1 % b2 << endl;

	//int c1 = 10;
	//int c2 = 0;
	//cout << c1 % c2 << endl;
	//除数不能为零

	//小数不能做取模运算
	//double d1 = 0.5;
	//double d2 = 0.1;
	//cout << d1 % d2 << endl;

	system("pause");

	return 0;
}