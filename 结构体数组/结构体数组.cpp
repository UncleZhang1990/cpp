#include<iostream>
#include<string>
using namespace std;
//�ṹ������
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
		{"����",18,100},
		{"����",19,90},
		{"����",20,80}
	};
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuArray[i].name
			<< " ���䣺" << stuArray[i].age
			<< " �ɼ���" << stuArray[i].score
			<< endl;
	}
	system("pause");
	return 0;
}