#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
//联系人结构体
struct Person
{
	string m_Name;
	int m_Sex;  //1.男 2.女
	int m_Age;
	string m_Phone;
	string m_Address;
};

//通讯录结构体
struct Addressbook
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];

	//通讯录中当前记录的联系人个数
	int m_Size;
};

//显示菜单
void showMenu()
{
	cout << "**************************" << endl;
	cout << "*****  " << "1.新建联系人" << "  *****" << endl;
	cout << "*****  " << "2.显示联系人" << "  *****" << endl;
	cout << "*****  " << "3.删除联系bb人" << "  *****" << endl;
	cout << "*****  " << "4.查找联系人" << "  *****" << endl;
	cout << "*****  " << "5.修改联系人" << "  *****" << endl;
	cout << "*****  " << "6.清空联系人" << "  *****" << endl;
	cout << "*****  " << "0.退出通讯录" << "  *****" << endl;
	cout << "**************************" << endl;
}

void addPerson(Addressbook* abs)
{
	//判断通讯录是否已满
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加，请删除部分联系人后重试！" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while (true)  //判断是否输入错误
		{
			cin >> sex;
			if (sex == 1 || sex == 2)  //如果为1或2则退出，否则继续
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}

		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		while (true)
		{
			cin >> age;
			if (age <= 0 || age >= 100)
			{
				cout << "输入有误，请重新输入！" << endl;
			}
			else
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
		}

		//电话
		string phone;
		cout << "请输入电话号码：" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//地址
		string address;
		cout << "请输入地址：" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Address = address;

		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功" << endl;

		system("pause");
		system("cls");  //清屏
	}
}

//显示联系人
void showPerson(Addressbook* abs)
{
	//判断是否有人
	if (abs->m_Size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "  ";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "  ";
			cout << "年龄：" << abs->personArray[i].m_Age << "  ";
			cout << "电话：" << abs->personArray[i].m_Phone << "  ";
			cout << "地址：" << abs->personArray[i].m_Address << endl;
		}
	}
	system("pause");
	system("cls");
}

//检测联系人是否存在，若存在则返回其下标，否则返回-1
int isExist(Addressbook* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//检测是否存在
		if (abs->personArray[i].m_Name == name)
		{
			return i;  //找到了
		}
		return -1;  //没找到
	}
}

//删除指定联系人
void deletePerson(Addressbook* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "通讯录为空！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		string name;
		cout << "请输入您要删除的联系人" << endl;
		cin >> name;
		//ret == -1  未查到
		//ret != -1  查到了
		int ret = isExist(abs, name);
		if (ret != -1)
		{
			//删除联系人
			for (int i = 0; i < abs->m_Size; i++)
			{
				//数据迁前移
				abs->personArray[i] = abs->personArray[i + 1];
				//更新通讯录人员数
				abs->m_Size--;
				cout << "删除成功" << endl;
				system("pause");
				system("cls");
			}

		}
		else
		{
			cout << "查无此人" << endl;
			system("pause");
			system("cls");
		}
	}
	
}

//查找并显示联系人信息
void findPeoson(Addressbook* abs)
{
	string name;
	cout << "请输入您要查找的联系人" << endl;
	cin >> name;
	//联系人是否存在
	//ret == -1  未查到
	//ret != -1  查到了
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "  ";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "  ";
		cout << "年龄：" << abs->personArray[ret].m_Age << "  ";
		cout << "电话：" << abs->personArray[ret].m_Phone << "  ";
		cout << "地址：" << abs->personArray[ret].m_Address << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "查无此人" << endl;
		system("pause");
		system("cls");
	}
}

//修改指定联系人
void modifyPerson(Addressbook* abs)
{
	string name;
	cout << "请输入您要修改的联系人" << endl;
	cin >> name;
	//联系人是否存在
	//ret == -1  未查到
	//ret != -1  查到了
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		while (true)
		{
			//用户选择修改项目
			int select = 0;
			cout << "请输入您要修改的项目编号" << endl;
			cout << "********************" << endl;
			cout << "*****  " << "1.姓名" << "  *****" << endl;
			cout << "*****  " << "2.性别" << "  *****" << endl;
			cout << "*****  " << "3.年龄" << "  *****" << endl;
			cout << "*****  " << "4.电话" << "  *****" << endl;
			cout << "*****  " << "5.地址" << "  *****" << endl;
			cout << "*****  " << "6.退出" << "  *****" << endl;
			cout << "********************" << endl;
			cin >> select;
			if (select == 6)
			{
				break;
			}
			else
			{
				//判断用户选择
				switch (select)
				{
				case 1:  //姓名
				{
					string name;
					cout << "请输入姓名：" << endl;
					cin >> name;
					abs->personArray[ret].m_Name = name;
					break;
				}
				case 2:  //性别
				{
					int sex = 0;
					cout << "请输入性别：" << endl;
					cout << "1 --- 男" << endl;
					cout << "2 --- 女" << endl;
					while (true)  //判断是否输入错误
					{
						cin >> sex;
						if (sex == 1 || sex == 2)  //如果为1或2则退出，否则继续
						{
							abs->personArray[ret].m_Sex = sex;
							break;
						}
						cout << "输入有误，请重新输入！" << endl;
					}
					break;
				}
				case 3:  //年龄
				{
					int age = 0;
					cout << "请输入年龄：" << endl;
					while (true)
					{
						cin >> age;
						if (age <= 0 || age >= 100)
						{
							cout << "输入有误，请重新输入！" << endl;
						}
						else
						{
							abs->personArray[ret].m_Age = age;
							break;
						}
					}
					break;
				}
				case 4:  //电话
				{
					string phone;
					cout << "请输入电话号码：" << endl;
					cin >> phone;
					abs->personArray[ret].m_Phone = phone;
					break;
				}
				case 5:  //地址
				{
					string address;
					cout << "请输入地址：" << endl;
					cin >> address;
					abs->personArray[ret].m_Address = address;
					break;
				}
				default:
					break;
				}
			}
		}
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//清空联系人
void cleanPerson(Addressbook* abs)
{
	//逻辑删除
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	//创建通讯录结构体变量
	Addressbook abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;
	int select = 0;  //用户选择变量
	while (true)  //循环使用
	{
		showMenu();  //菜单调用
		cin >> select;  //用户选择
		switch (select)  //选择判断
		{
		case 0:  //退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		case 1:  //新建联系人
			addPerson(&abs);  //利用地址传递，可以修饰实参
			break;
		case 2:  //显示联系人
			showPerson(&abs);
			break;
		case 3:  //删除联系人
			deletePerson(&abs);
			break;
		case 4:  //查找联系人
			findPeoson(&abs);
			break;
		case 5:  //修改联系人
			modifyPerson(&abs);
			break;
		case 6:  //清空联系人
			cleanPerson(&abs);
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}