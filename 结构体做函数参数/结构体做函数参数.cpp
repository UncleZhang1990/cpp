#include<iostream>
#include<string>
using namespace std;
//�ṹ������������
struct Student
{
	string name;
	int age;
	int score;
};
//ֵ����
void printStudent1(struct Student s1)
{
	cout << "�Ӻ���ֵ���ݴ�ӡ" << endl;
	s1.age = 20;
	cout << "������" << s1.name
		<< " ���䣺" << s1.age
		<< " �ɼ���" << s1.score
		<< endl;
}
//��ַ����
void printStudent2(struct Student* p1)
{
	cout << "�Ӻ�����ַ���ݴ�ӡ" << endl;
	p1->age = 20;
	cout << "������" << p1->name
		<< " ���䣺" << p1->age
		<< " �ɼ�" << p1->score
		<< endl;
}
int main()
{
	struct Student s1 = { "����",18,100 };
	printStudent1(s1);
	printStudent2(&s1);
	cout << "��������ӡ" << endl;
	cout << "������" << s1.name
		<< " ���䣺" << s1.age
		<< " �ɼ���" << s1.score
		<< endl;
	system("pause");
	return 0;
}