#include <iostream>
using namespace std;
//������
//1.�޷�ʵ��������
//2.����������࣬����Ҫ��д�����еĴ��麯��������Ҳ�޷�ʵ��������
class Base//������
{
public:
	virtual void func() = 0;
};
class Son :public Base
{
public:
	 void func()
	{
		 cout << "funcSon�ĵ���" << endl;
	}
};
void test01()
{
	//Base b;������
	//Son s1;
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
}