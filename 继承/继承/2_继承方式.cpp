#include <iostream>
using namespace std;
//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;
		m_B = 12;
		//m_C = 10;//������˽�г�Ա�������з��ʲ���
	}
};
void test01()
{
	Son1 s1;
	s1.m_A = 20;
	s1.func();
}
//�����̳�
class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		cout << m_A << endl;
		cout << m_B << endl;
	}
};
void test02()
{
	Son2 s1;
	s1.func();

}
class Son3 :private Base1
{
public:
	void finc()
	{

	}
};
class GrangSon3 :public Son3
{
public:

};
int main()
{
	test02();
}