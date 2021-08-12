#include<iostream>
using namespace std;
int main()
{
	//const修饰指针
	//1.const修饰指针
	int a = 10;
	int b = 10;
	const int* p = &a;  //指向的值不可以改，指向可以改
	//*p = 20;
	p = &b;
	//2.const修饰常量
	int* const p2 = &a;  //指向的值可以改，指向不可以改
	//*p2 = &b;
	*p2 = 20;
	//3.const修饰指针和常量
	const int* const p3 = &a;  //指向的值不可以改，指向不可以改
	//p3 = &b;
	//*p3 = 20;
	system("pause");
	return 0;
}