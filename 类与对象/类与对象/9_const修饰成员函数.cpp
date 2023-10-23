#include<iostream>
using namespace std;
//常函数：常函数内不可修改成员属性；成员属性声明后加mutable,在常函数中可修改
//常对象：声明对象前加const;常对象只能调用常函数
class Person
{
public:
	//this指针的本质，是指针常量，指向不可修改
	//const Person *const this//让this指针指向的值也不能修改
	void showPerson()const
	{
		//this->m_A = 100;
		//this->NULL;
		this->m_B = 100;
	}
	void func() {}
	int m_A;
	mutable int m_B;//特殊变量
};
void test01()
{
	Person p;
	p.showPerson();
}
//常对象
void test02()
{
	const Person p;
	p.m_B = 300;//m_B是特殊值，在常对象下也能修改
	//常对象只能调用常函数
	p.showPerson();
	//p.func(); //不允许
}

int main()
{
	test01();
	test02();
}