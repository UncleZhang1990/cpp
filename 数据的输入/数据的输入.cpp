#include<iostream>
#include<string>  //string头文件
using namespace std;

int main()
{
	//1.整型
	int a = 0;
	cout << "请为整型a赋值：" << endl;
	cin >> a;
	cout << "整型变量a=" << a << endl;

	//2.浮点型
	float f = 3.14f;
	cout << "请为浮点型f赋值：" << endl;
	cin >> f;
	cout << "浮点型变量f=" << f << endl;

	//3.字符型
	char ch = 'a';
	cout << "请为字符型ch赋值：" << endl;
	cin >> ch;
	cout << "字符型变量ch=" << ch << endl;

	//4.字符串型
	string str = "hello";
	cout << "请为字符串型str赋值：" << endl;
	cin >> str;
	cout << "字符串型变量str=" << str << endl;

	//5.布尔型
	bool flag = false;
	cout << "请为布尔型flag赋值：" << endl;
	cin >> flag;  //bool类型，只要是非0的值都代表“真”
	cout << "布尔型变量flag=" << flag << endl;

	system("pause");

	return 0;
}