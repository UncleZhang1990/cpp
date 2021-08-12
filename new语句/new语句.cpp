#include<iostream>
using namespace std;

//1.new的基本语法
int* func()
	{
		//在堆区创建整形数据
	    int* p = new int(10);
		return p;
	}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由程序员管理、释放
	//若要释放堆区数据，可使用delete关键字
	delete p;

	//cout << *p << endl;  内存已被释放，再操作就是非法操作，会报错
}

//2.在堆区用new开辟数组
void test02()
{
	//在堆区创建数组
	int* length = new int(10);
	int* arr = new int[*length];

	for (int i = 0; i < *length; i++)
	{
		arr[i] = i + 100;  //100~109
	}

	for (int i = 0; i < *length; i++)
	{
		cout << arr[i] << endl;
	}

	//释放数组
	//释放数组时要加[]
	delete[] arr;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}