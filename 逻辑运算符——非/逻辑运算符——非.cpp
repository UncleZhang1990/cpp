#include<iostream>
using namespace std;
int main()
{
	//逻辑运算符——非
	//真变假，假变真
	int a = 10;
	//在C++中，除了0都为真
	cout << !a << endl;
	//两次取反
	cout << !!a << endl;
	system("pause");
	return 0;
}