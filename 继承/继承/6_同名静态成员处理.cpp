#include <iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	static void func()
	{
		cout << "Base-func调用" << endl;
	}
	static void func(int a)
	{
		cout << "Son-func(int a)调用" << endl;
	}
	static int m_A;//类内声明，类外初始化
};
int Base::m_A = 100;
class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	static void func()
	{
		cout << "Son-func调用" << endl;
	}

	static int m_A;
};
int Son::m_A = 200;
//同名静态属性
void test01()
{
	//通过对象访问
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
	//通过类名访问
	cout << Son::m_A << endl;
	cout << Base::m_A << endl;
	cout << Son::Base::m_A << endl;//类名加作用域
}
void test02()
{
	Son s;
	//通过对象访问
	s.func();
	s.Base::func();
	//通过类名访问
	Son::func();
	Base::func();
	Son::Base::func();
	Base::func(452);
}
int main()
{
	//test01();
	test02();
}