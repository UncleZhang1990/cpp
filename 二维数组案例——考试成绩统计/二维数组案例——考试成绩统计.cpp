#include<iostream>
#include<string>
using namespace std;
int main()
{
	//��ά���鰸���������Գɼ�ͳ��
	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string name[3] = { "����","����","����" };
	string subject[3] = { "����","��ѧ","Ӣ��" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		cout << name[i] << ":" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << subject[j] << ";";
			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		cout << "�ܷ֣�" << sum;
		cout << endl;
	}
	system("pause");
	return 0;
}