#include<iostream>
using namespace std;
int main()
{
	//一维数组——数组名
	//数组名用途：
	//1.可以通过数组名统计整个数组占用内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用内存大小:" << sizeof(arr) << endl;
	cout << "每个元素占用内存大小:" << sizeof(arr[0]) << endl;
	cout << "数组元素个数:" << sizeof(arr) / sizeof(arr[0]) << endl;
	//2.可以通过数组名查看数组首地址
	cout << "数组首地址（16进制）:" << arr << endl;
	cout << "数组首地址（10进制）:" << (int)arr << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "第" << (i + 1) << "个元素首地址（16进制）:" << &arr[i] << endl;
		cout << "第" << (i + 1) << "个元素首地址（10进制）:" << (int)&arr[i] << endl;
	}
	//数组名是常量，不可修改
	system("pause");
	return 0;
}