#include <iostream>
using namespace std;
//��̳�
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
//�﷨��class ���ࣺ�̳з�ʽ ����1���̳з�ʽ ����2...
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
	//�������г���������Ա,������������
	cout << s1.Base1::m_A << endl;
	cout << s1.Base2::m_A << endl;
}
int main()
{
	test01();
}