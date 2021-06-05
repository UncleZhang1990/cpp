#include<iostream>
using namespace std;

int main()
{
	//1.字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;

	//2.字符型变量所占内存大小
	cout << "字符型变量所占内存:" << sizeof(char) << "字节" << endl;

	//3.字符型变量常见错误
	//char ch2 = "b";  //创建字符型变量的时候，要用单引号
	//char ch3 = 'abcefg';  //创建字符型变量的时候，单引号内只能有一个字符

	//4.字符型变量对应的ASCII编码
	cout << (int)ch << endl;  //(int)ch   (int)将字符型强制转换为整型

	system("pause");

	return 0;
}