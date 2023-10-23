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
		cout << "Base-func����" << endl;
	}
	static void func(int a)
	{
		cout << "Son-func(int a)����" << endl;
	}
	static int m_A;//���������������ʼ��
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
		cout << "Son-func����" << endl;
	}

	static int m_A;
};
int Son::m_A = 200;
//ͬ����̬����
void test01()
{
	//ͨ���������
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
	//ͨ����������
	cout << Son::m_A << endl;
	cout << Base::m_A << endl;
	cout << Son::Base::m_A << endl;//������������
}
void test02()
{
	Son s;
	//ͨ���������
	s.func();
	s.Base::func();
	//ͨ����������
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