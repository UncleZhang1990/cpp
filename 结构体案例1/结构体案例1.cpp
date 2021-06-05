#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//ѧ���ṹ��
struct Student
{
	//����
	string sName;
	//�ɼ�
	int score;
};
//��ʦ�ṹ��
struct Teacher
{
	//����
	string tName;
	//ѧ������
	struct Student sArray[5];
};
//��ֵ
void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		//��ÿ����ʦ��ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			//��ֵѧ���ɼ�
			int random = rand() % 61 + 40;  //40~100
			tArray[i].sArray[j].score = random;
		}
	}
}
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sName
				<< "���Գɼ���" << tArray[i].sArray[j].score
				<< endl;

		}
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//����3����ʦ������
	struct Teacher tArray[3];
	//ͨ����������ʦ��ѧ����ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//��ӡ������Ϣ
	printInfo(tArray, len);
	system("pause");
	return 0;
}