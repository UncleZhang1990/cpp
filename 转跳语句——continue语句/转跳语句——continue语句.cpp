#include<iostream>
using namespace std;
int main()
{
	//ת����䡪��continue���
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}