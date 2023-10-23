#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);//����
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//���ظ�ֵ
	Person& operator=(Person&p)
	{
		//m_Age=p.m_Age;
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);//���
		//���ض�����
		return *this;
	}

	int* m_Age;
};
void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3=p2 = p1;
	cout << "p1���䣺" << *p1.m_Age << endl;
	cout << "p2���䣺" << *p2.m_Age << endl;
	cout << "p3���䣺" << *p3.m_Age << endl;

}
int main()
{
	test01();
	int a = 10, b = 20, c = 30;
	c = b = a;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}