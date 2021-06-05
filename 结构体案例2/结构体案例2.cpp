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
		cout << "ÐÕÃû£º" << heroArrry[i].name << " "
			<< "ÄêÁä£º" << heroArrry[i].age << " "
			<< "ÐÔ±ð£º" << heroArrry[i].sex << endl;
	}
}
int main()
{
	struct Hero heroArray[5] =
	{
		{"Áõ±¸",23,"ÄÐ"},
		{"¹ØÓð",22,"ÄÐ"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"},
		{"õõ²õ",19,"Å®"}

	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	bubbleSort(heroArray, len);
	printHerro(heroArray, len);
	system("pause");
	return 0;
}