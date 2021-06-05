#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};
//结构体嵌套结构体
struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu1;
};
int main()
{
	struct Teacher t1;
	t1.id = 10001;
	t1.name = "老王";
	t1.age = 50;
	t1.stu1.name = "小王";
	t1.stu1.age = 20;
	t1.stu1.score = 60;
	cout << "老师：" << endl;
	cout << "编号：" << t1.id
		<< " 姓名：" << t1.name
		<< " 年龄：" << t1.age
		<< endl;
	cout << "学生：" << endl;
	cout << "姓名：" << t1.stu1.name
		<< " 年龄：" << t1.stu1.age
		<< " 成绩：" << t1.stu1.score
		<< endl;
	system("pause");
	return 0;
}