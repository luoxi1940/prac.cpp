#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);//堆区
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//重载赋值
	Person& operator=(Person&p)
	{
		//m_Age=p.m_Age;
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);//深拷贝
		//返回对象本身
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
	cout << "p1年龄：" << *p1.m_Age << endl;
	cout << "p2年龄：" << *p2.m_Age << endl;
	cout << "p3年龄：" << *p3.m_Age << endl;

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