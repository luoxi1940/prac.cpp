#include<iostream>
using namespace std;
class Phone
{
public:
	Phone(string pname)
	{
		cout << "Phone���캯��" << endl;
		m_Pname = pname;
	}

	string m_Pname;//�ֻ���
	~Phone()
	{
		cout << "Phone����" << endl;
	}
};
class Person
{
public:
	//Phone m_Phone=pname//��ʽת����
	Person(string name, string pname):m_name(name),m_Phone(pname){
		cout << "Person���캯��" << endl;
	}

	string m_name;
	Phone m_Phone;
	~Person()
	{
		cout << "Person����" << endl;
	}
};
//�����������Ϊ�����Աʱ������ʱ�ȹ���������ڹ�������
//����˳���빹���෴
void  test01()
{
	Person p("����", "ƻ��MAX");
	cout << p.m_name << "  " << p.m_Phone.m_Pname<<endl;

}
int main()
{
	test01();
}