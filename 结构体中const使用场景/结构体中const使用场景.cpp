#include<iostream>
#include<string>
using namespace std;
//结构体中const使用场景
struct Student
{
	string name;
	int age;
	int score;
};
void printStudent(const Student *s1)  //加入const防止误操作
{
	cout << "姓名：" << s1->name
		<< " 年龄：" << s1->age
		<< " 成绩：" << s1->score
		<< endl;
}
int main()
{
	struct Student s1 = { "张三",18,100 };
	printStudent(&s1);
	system("pause");
	return 0;
}