#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};
//�ṹ��Ƕ�׽ṹ��
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
	t1.name = "����";
	t1.age = 50;
	t1.stu1.name = "С��";
	t1.stu1.age = 20;
	t1.stu1.score = 60;
	cout << "��ʦ��" << endl;
	cout << "��ţ�" << t1.id
		<< " ������" << t1.name
		<< " ���䣺" << t1.age
		<< endl;
	cout << "ѧ����" << endl;
	cout << "������" << t1.stu1.name
		<< " ���䣺" << t1.stu1.age
		<< " �ɼ���" << t1.stu1.score
		<< endl;
	system("pause");
	return 0;
}