#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1.C风格的字符串
	//注意事项1：ch 字符串名[]
	//注意事项1：等号后面用双引号
	char str[] = "helloworld";
	cout << str << endl;

	//2.C++风格的字符串
	//包含一个头文件  #include<string>
	string str2 = "helloworld";
	cout << str2 << endl;

	system("pause");

	return 0;
}