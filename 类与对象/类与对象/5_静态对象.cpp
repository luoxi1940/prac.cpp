#include<iostream>
using namespace std;
//静态成员变量：所有对象共享一份数据；在编译阶段分配内存；类内声明，类外初始化
//静态成员函数：所有对象共享一个函数；静态成员函数只能访问静态成员变量
class Person
{
public:
	static int m_A;//类内声明
	static void func()
	{
		m_A = 300;//静态成员函数只能访问静态成员变量
		//m_C = 400;//不可访问
		cout << "static func调用" << endl;
	}
	int m_C;


private://静态成员变量也有访问权限
	static int m_B;
};
int Person::m_A = 100;//类外初始化
int Person::m_B = 200;
void test01()
{
	Person p;
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;//共享
}
void test02()
{
	//静态成员变量，不属于某个对象上，所有对象共享一份数据
	//因此静态成员变量有两种访问方式
	//1.通过对象访问
	Person p;
	cout << p.m_A << endl;
	//2.通过类名访问
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;
}
void test03()
{
	//1.通过对象
	Person b;
	b.func();
	//2.通过类名
	Person::func();
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}