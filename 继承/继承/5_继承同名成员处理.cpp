#include <iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base-func调用" << endl;
	}
	void func(int a)
	{
		cout << "Son-func(int a)调用" << endl;
	}
	int m_A;
};
class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	/*void func()
	{
		cout << "Son-func调用" << endl;
	}
	*/
	int m_A;
};
void test01()
{
	Son s;
	cout << s.m_A << endl;
	//通过子类对象访问父类中同名成员，需加作用域
	cout << s.Base::m_A << endl;
}
//同名函数
void test02()
{
	Son s;
	s.func();
	//调用父类同名成员函数
	s.Base::func();
	//若子类中出现与父类同名的成员函数，子类的同名函数会隐藏掉父类所有同名成员函数（与参数无关）
	//若想访问，需加作用域
	s.func(100);
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}