#include<iostream>
#include<string>
using namespace std;
//结构体数组
struct Student
{
	string name;
	int age;
	int score;
};
int main()
{
	struct Student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",19,90},
		{"王五",20,80}
	};
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArray[i].name
			<< " 年龄：" << stuArray[i].age
			<< " 成绩：" << stuArray[i].score
			<< endl;
	}
	system("pause");
	return 0;
}