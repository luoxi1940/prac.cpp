#include <iostream>
using namespace std;
//多继承
class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};
class Base2
{
public:
	Base2()
	{
		m_A = 100;
	}
	int m_A;
};
//语法：class 子类：继承方式 父类1，继承方式 父类2...
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 200;
		m_D= 200;
	}
	int m_C;
	int m_D;
};
void test01()
{
	Son s1;
	cout << sizeof(s1) << endl;//16
	//当父类中出现重名成员,加作用域区分
	cout << s1.Base1::m_A << endl;
	cout << s1.Base2::m_A << endl;
}
int main()
{
	test01();
}