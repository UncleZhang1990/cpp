#include<iostream>
#include<string>
using namespace std;
//结构体指针
struct Student
{
	string name;
	int age;
	int score;
};
int main()
{
	struct Student s1 = { "张三",18,100 };
	struct Student* p1 = &s1;
	cout << "姓名：" << p1->name
		<< " 年龄：" << p1->age
		<< " 成绩" << p1->score
		<< endl;
	system("pause");
	return 0;
}