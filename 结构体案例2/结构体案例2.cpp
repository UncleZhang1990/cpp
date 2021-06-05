#include <iostream>
#include <string>
using namespace std;
struct Hero
{
	string name;
	int age;
	string sex;
};
void bubbleSort(struct Hero heroArrry[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (heroArrry[j].age > heroArrry[j + 1].age)
			{
				struct Hero temp = heroArrry[j];
				heroArrry[j] = heroArrry[j + 1];
				heroArrry[j + 1] = temp;

			}
		}
	}
}
void printHerro(struct Hero heroArrry[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArrry[i].name << " "
			<< "���䣺" << heroArrry[i].age << " "
			<< "�Ա�" << heroArrry[i].sex << endl;
	}
}
int main()
{
	struct Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}

	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	bubbleSort(heroArray, len);
	printHerro(heroArray, len);
	system("pause");
	return 0;
}