#include<iostream>
using namespace std;
int main()
{
	//一维数组案例——元素逆置
	int arr[5] = { 1,3,2,5,4 };
	cout << "逆置前：" << endl;
	for (int a = 0; a < 5; a++)
	{
		cout << arr[a] << endl;
	}
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "逆置后：" << endl;
	for (int b = 0; b < 5; b++)
	{
		cout << arr[b] << endl;
	}
	system("pause");
	return 0;
}