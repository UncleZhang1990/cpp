#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//学生结构体
struct Student
{
	//姓名
	string sName;
	//成绩
	int score;
};
//老师结构体
struct Teacher
{
	//姓名
	string tName;
	//学生数组
	struct Student sArray[5];
};
//赋值
void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		//给每个老师的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			//赋值学生成绩
			int random = rand() % 61 + 40;  //40~100
			tArray[i].sArray[j].score = random;
		}
	}
}
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName
				<< "考试成绩：" << tArray[i].sArray[j].score
				<< endl;

		}
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建3名老师的数组
	struct Teacher tArray[3];
	//通过函数给老师和学生赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//打印所以信息
	printInfo(tArray, len);
	system("pause");
	return 0;
}