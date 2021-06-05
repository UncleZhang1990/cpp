#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
//��ϵ�˽ṹ��
struct Person
{
	string m_Name;
	int m_Sex;  //1.�� 2.Ů
	int m_Age;
	string m_Phone;
	string m_Address;
};

//ͨѶ¼�ṹ��
struct Addressbook
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼�е�ǰ��¼����ϵ�˸���
	int m_Size;
};

//��ʾ�˵�
void showMenu()
{
	cout << "**************************" << endl;
	cout << "*****  " << "1.�½���ϵ��" << "  *****" << endl;
	cout << "*****  " << "2.��ʾ��ϵ��" << "  *****" << endl;
	cout << "*****  " << "3.ɾ����ϵbb��" << "  *****" << endl;
	cout << "*****  " << "4.������ϵ��" << "  *****" << endl;
	cout << "*****  " << "5.�޸���ϵ��" << "  *****" << endl;
	cout << "*****  " << "6.�����ϵ��" << "  *****" << endl;
	cout << "*****  " << "0.�˳�ͨѶ¼" << "  *****" << endl;
	cout << "**************************" << endl;
}

void addPerson(Addressbook* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ���ɾ��������ϵ�˺����ԣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		while (true)  //�ж��Ƿ��������
		{
			cin >> sex;
			if (sex == 1 || sex == 2)  //���Ϊ1��2���˳����������
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		//����
		int age = 0;
		cout << "���������䣺" << endl;
		while (true)
		{
			cin >> age;
			if (age <= 0 || age >= 100)
			{
				cout << "�����������������룡" << endl;
			}
			else
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
		}

		//�绰
		string phone;
		cout << "������绰���룺" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ַ
		string address;
		cout << "�������ַ��" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Address = address;

		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls");  //����
	}
}

//��ʾ��ϵ��
void showPerson(Addressbook* abs)
{
	//�ж��Ƿ�����
	if (abs->m_Size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "  ";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "  ";
			cout << "���䣺" << abs->personArray[i].m_Age << "  ";
			cout << "�绰��" << abs->personArray[i].m_Phone << "  ";
			cout << "��ַ��" << abs->personArray[i].m_Address << endl;
		}
	}
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ���ڣ��������򷵻����±꣬���򷵻�-1
int isExist(Addressbook* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//����Ƿ����
		if (abs->personArray[i].m_Name == name)
		{
			return i;  //�ҵ���
		}
		return -1;  //û�ҵ�
	}
}

//ɾ��ָ����ϵ��
void deletePerson(Addressbook* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "ͨѶ¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		string name;
		cout << "��������Ҫɾ������ϵ��" << endl;
		cin >> name;
		//ret == -1  δ�鵽
		//ret != -1  �鵽��
		int ret = isExist(abs, name);
		if (ret != -1)
		{
			//ɾ����ϵ��
			for (int i = 0; i < abs->m_Size; i++)
			{
				//����Ǩǰ��
				abs->personArray[i] = abs->personArray[i + 1];
				//����ͨѶ¼��Ա��
				abs->m_Size--;
				cout << "ɾ���ɹ�" << endl;
				system("pause");
				system("cls");
			}

		}
		else
		{
			cout << "���޴���" << endl;
			system("pause");
			system("cls");
		}
	}
	
}

//���Ҳ���ʾ��ϵ����Ϣ
void findPeoson(Addressbook* abs)
{
	string name;
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	cin >> name;
	//��ϵ���Ƿ����
	//ret == -1  δ�鵽
	//ret != -1  �鵽��
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "  ";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "  ";
		cout << "���䣺" << abs->personArray[ret].m_Age << "  ";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "  ";
		cout << "��ַ��" << abs->personArray[ret].m_Address << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
	}
}

//�޸�ָ����ϵ��
void modifyPerson(Addressbook* abs)
{
	string name;
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	cin >> name;
	//��ϵ���Ƿ����
	//ret == -1  δ�鵽
	//ret != -1  �鵽��
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		while (true)
		{
			//�û�ѡ���޸���Ŀ
			int select = 0;
			cout << "��������Ҫ�޸ĵ���Ŀ���" << endl;
			cout << "********************" << endl;
			cout << "*****  " << "1.����" << "  *****" << endl;
			cout << "*****  " << "2.�Ա�" << "  *****" << endl;
			cout << "*****  " << "3.����" << "  *****" << endl;
			cout << "*****  " << "4.�绰" << "  *****" << endl;
			cout << "*****  " << "5.��ַ" << "  *****" << endl;
			cout << "*****  " << "6.�˳�" << "  *****" << endl;
			cout << "********************" << endl;
			cin >> select;
			if (select == 6)
			{
				break;
			}
			else
			{
				//�ж��û�ѡ��
				switch (select)
				{
				case 1:  //����
				{
					string name;
					cout << "������������" << endl;
					cin >> name;
					abs->personArray[ret].m_Name = name;
					break;
				}
				case 2:  //�Ա�
				{
					int sex = 0;
					cout << "�������Ա�" << endl;
					cout << "1 --- ��" << endl;
					cout << "2 --- Ů" << endl;
					while (true)  //�ж��Ƿ��������
					{
						cin >> sex;
						if (sex == 1 || sex == 2)  //���Ϊ1��2���˳����������
						{
							abs->personArray[ret].m_Sex = sex;
							break;
						}
						cout << "�����������������룡" << endl;
					}
					break;
				}
				case 3:  //����
				{
					int age = 0;
					cout << "���������䣺" << endl;
					while (true)
					{
						cin >> age;
						if (age <= 0 || age >= 100)
						{
							cout << "�����������������룡" << endl;
						}
						else
						{
							abs->personArray[ret].m_Age = age;
							break;
						}
					}
					break;
				}
				case 4:  //�绰
				{
					string phone;
					cout << "������绰���룺" << endl;
					cin >> phone;
					abs->personArray[ret].m_Phone = phone;
					break;
				}
				case 5:  //��ַ
				{
					string address;
					cout << "�������ַ��" << endl;
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
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�����ϵ��
void cleanPerson(Addressbook* abs)
{
	//�߼�ɾ��
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbook abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;
	int select = 0;  //�û�ѡ�����
	while (true)  //ѭ��ʹ��
	{
		showMenu();  //�˵�����
		cin >> select;  //�û�ѡ��
		switch (select)  //ѡ���ж�
		{
		case 0:  //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		case 1:  //�½���ϵ��
			addPerson(&abs);  //���õ�ַ���ݣ���������ʵ��
			break;
		case 2:  //��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:  //ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:  //������ϵ��
			findPeoson(&abs);
			break;
		case 5:  //�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:  //�����ϵ��
			cleanPerson(&abs);
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}