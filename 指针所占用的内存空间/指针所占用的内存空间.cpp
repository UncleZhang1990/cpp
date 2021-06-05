#include<iostream>
using namespace std;
int main()
{
	//指针所占用的内存空间
	int a = 10;
	int* p = &a;
	//在32位操作系统中指针占4字节，在64位操作系统中指针占8字节，不管什么数据类型
	cout << "sizeof (int*) = " << sizeof(int*) << endl;
	cout << "sizeof (float*) = " << sizeof(float*) << endl;
	cout << "sizeof (double*) = " << sizeof(double*) << endl;
	cout << "sizeof (char*) = " << sizeof(char*) << endl;
	cout << "sizeof (long*) = " << sizeof(long*) << endl;
	cout << "sizeof (long long*) = " << sizeof(long long*) << endl;
	system("pause");
	return 0;
}