#include<iostream>
using namespace std;

//标识符命名规则
//1.标识符不可以是关键字
//2.标识符是由字母、数字、下划线构成
//3.标识符第一个字母只能是字母或下划线
//4.标识符区分大小写
int main()
{
	//1.标识符不可以是关键字
	//int int=10;

	//2.标识符是由字母、数字、下划线构成
	int abc = 10;
	int _abc = 10;
	int _123 = 10;

	//3.标识符第一个字母只能是字母或下划线
	//int 123=10;

	//4.标识符区分大小写
	int a = 10;
	int A = 100;
	cout << a << endl;
	cout << A << endl;

	//建议：标识符最好能见名知意
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << sum << endl;

	//int a = 10;
	//int b = 20;
	//int c = a + b;
	//cout << sum << endl;

	system("pause");
}