#include<iostream>
#include<string>
using namespace std;
//�ṹ��ָ��
struct Student
{
	string name;
	int age;
	int score;
};
int main()
{
	struct Student s1 = { "����",18,100 };
	struct Student* p1 = &s1;
	cout << "������" << p1->name
		<< " ���䣺" << p1->age
		<< " �ɼ�" << p1->score
		<< endl;
	system("pause");
	return 0;
}