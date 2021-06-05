#include<iostream>
using namespace std;
int main()
{
	//1.创建bool类型
	bool flag = true;  //true代表“真”
	cout << flag << endl;

	flag = false;  //false代表“假”
	cout << flag << endl;

	//本质上，“真”代表1，“假”代表0

	//2.查看bool类型所占内存空间
	cout << "bool类型所占内存：" << sizeof(bool) << endl;

	system("pause");

	return 0;
}