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
		cout << "Base-func����" << endl;
	}
	void func(int a)
	{
		cout << "Son-func(int a)����" << endl;
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
		cout << "Son-func����" << endl;
	}
	*/
	int m_A;
};
void test01()
{
	Son s;
	cout << s.m_A << endl;
	//ͨ�����������ʸ�����ͬ����Ա�����������
	cout << s.Base::m_A << endl;
}
//ͬ������
void test02()
{
	Son s;
	s.func();
	//���ø���ͬ����Ա����
	s.Base::func();
	//�������г����븸��ͬ���ĳ�Ա�����������ͬ�����������ص���������ͬ����Ա������������޹أ�
	//������ʣ����������
	s.func(100);
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}