#include<iostream>
#include<string>
using namespace std;
//结构体定义和使用
//语法： struct 结构体名 { 结构体成员列表 };
struct Student
{
	string name;
	int age;
	int score;
}s3;
int main()
{
	//结构体的使用
	//创建具体成员
	//1.struct Student s1;
	//struct可以省略
	Student s1;
	//通过.访问s1变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 成绩：" << s1.score << endl;
	//2.struct Student s2={ ... };
	struct Student s2 = { "李四",19,90 };
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 成绩：" << s2.score << endl;
	//定义结构体时顺便定义变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 80;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 成绩：" << s3.score << endl;
	system("pause");
	return 0;
}