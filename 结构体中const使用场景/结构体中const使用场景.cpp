#include<iostream>
#include<string>
using namespace std;
//�ṹ����constʹ�ó���
struct Student
{
	string name;
	int age;
	int score;
};
void printStudent(const Student *s1)  //����const��ֹ�����
{
	cout << "������" << s1->name
		<< " ���䣺" << s1->age
		<< " �ɼ���" << s1->score
		<< endl;
}
int main()
{
	struct Student s1 = { "����",18,100 };
	printStudent(&s1);
	system("pause");
	return 0;
}