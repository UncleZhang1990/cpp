#include<iostream>
using namespace std;
int main()
{
	//嵌套循环
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}