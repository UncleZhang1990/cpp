#include <iostream>
using namespace std;
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a=" << a << endl;
	cout << "swap01 b=" << b << endl;
}
void swap02(int *p, int *p2)
{
	int temp = *p;
	*p = *p2;
	*p2 = temp;
}
int main()
{
	//ָ��ͺ���
	int a = 10;
	int b = 20;
	//swap01(a, b);
	//����ǵ�ַ���ݣ���������ʵ��
	swap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}