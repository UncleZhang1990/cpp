#include<iostream>
#include<string>
using namespace std;
//�ṹ�嶨���ʹ��
//�﷨�� struct �ṹ���� { �ṹ���Ա�б� };
struct Student
{
	string name;
	int age;
	int score;
}s3;
int main()
{
	//�ṹ���ʹ��
	//���������Ա
	//1.struct Student s1;
	//struct����ʡ��
	Student s1;
	//ͨ��.����s1�����е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << " ���䣺" << s1.age << " �ɼ���" << s1.score << endl;
	//2.struct Student s2={ ... };
	struct Student s2 = { "����",19,90 };
	cout << "������" << s2.name << " ���䣺" << s2.age << " �ɼ���" << s2.score << endl;
	//����ṹ��ʱ˳�㶨�����
	s3.name = "����";
	s3.age = 20;
	s3.score = 80;
	cout << "������" << s3.name << " ���䣺" << s3.age << " �ɼ���" << s3.score << endl;
	system("pause");
	return 0;
}