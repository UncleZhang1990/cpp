#include<iostream>
#include<string>
using namespace std;
//结构体做函数参数
struct Student
{
	string name;
	int age;
	int score;
};
//值传递
void printStudent1(struct Student s1)
{
	cout << "子函数值传递打印" << endl;
	s1.age = 20;
	cout << "姓名：" << s1.name
		<< " 年龄：" << s1.age
		<< " 成绩：" << s1.score
		<< endl;
}
//地址传递
void printStudent2(struct Student* p1)
{
	cout << "子函数地址传递打印" << endl;
	p1->age = 20;
	cout << "姓名：" << p1->name
		<< " 年龄：" << p1->age
		<< " 成绩" << p1->score
		<< endl;
}
int main()
{
	struct Student s1 = { "张三",18,100 };
	printStudent1(s1);
	printStudent2(&s1);
	cout << "主函数打印" << endl;
	cout << "姓名：" << s1.name
		<< " 年龄：" << s1.age
		<< " 成绩：" << s1.score
		<< endl;
	system("pause");
	return 0;
}