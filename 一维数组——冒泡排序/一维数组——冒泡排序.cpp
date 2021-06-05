#include<iostream>
using namespace std;
int main()
{
	//Ò»Î¬Êý×é¡ª¡ªÃ°ÅÝÅÅÐò
	int arr[10] = { 2,8,7,6,8,9,4,5,9,10 };
	cout << "ÅÅÐòÇ°:" << endl;
	for (int a = 0; a < 10; a++)
	{
		cout << arr[a] << " ";
	}
	cout << endl;
	for (int b = 0; b < 10 - 1; b++)
	{
		for (int c = 0; c < 10 - 1 - b; c++)
		{
			if (arr[c] > arr[c + 1])
			{
				int temp = arr[c];
				arr[c] = arr[c + 1];
				arr[c + 1] = temp;
			}
		}
	}
	cout << "ÅÅÐòºó:" << endl;
	for (int d = 0; d < 10; d++)
	{
		cout << arr[d] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}