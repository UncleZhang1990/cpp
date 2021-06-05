#include<iostream>
using namespace std;
int main()
{
	//二维数组数组名
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组内存空间占用：" << sizeof(arr) << endl;
	cout << "二维数组第一行内存空间占用：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个内存空间占用：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组行数：" << sizeof(arr) / sizeof(arr[0]) << endl; 
	cout << "二维数组列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << "二维数组首地址（16进制）：" << arr << endl;
	cout << "二维数组首地址（10进制）：" << (int)arr << endl;
	cout << "二维数组第一行首地址（16进制）：" << arr[0] << endl;
	cout << "二维数组第一行首地址（10进制）：" << (int)arr[0] << endl;
	cout << "二维数组第二行首地址（16进制）：" << arr[1] << endl;
	cout << "二维数组第二行首地址（10进制）：" << (int)arr[1] << endl;
	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			cout << "二维数组第" << a + 1 << "行第" << b + 1 << "列地址（16进制）：" << &arr[a][b] << endl;
			cout << "二维数组第" << a + 1 << "行第" << b + 1 << "列地址（10进制）：" << (int)&arr[a][b] << endl;
		}
	}
	system("pause");
	return 0;
}