#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ���" << endl;
	};
	Person(int age)
	{
		mage = age;
		cout << "�вι���" << endl;
	}
	//�Լ��ĸ߼����������α������ĵͼ�����
	//Person(const Person &p)
	//{
		//mage = p.mage;
		//cout << "��������" << endl;
	//}
	~Person()
	{
		cout << "��������" << endl;
	}
	int mage;


};
void test01()
{
	Person p;
	p.mage = 18;
	Person p2(p);
	cout << p2.mage<<endl;;
}

int main()
{
	test01();
}