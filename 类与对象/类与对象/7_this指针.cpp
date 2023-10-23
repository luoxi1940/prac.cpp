#include<iostream>
using namespace std;
//this指针指向被调用的成员函数所属的对象，是隐含每一个非静态成员函数内的一种指针：
// 当形参与成员变量同名时，可用this指针区分；
//在类的非静态成员函数中返回对象本身，可用return*this
class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	int age;
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		//this是指向p2的指针，*this指向的是p2
		return *this;
	}
};
//1.解决名称冲突
void test01()
{
	Person p1(18);
	cout << p1.age << endl;

}
//返回对象本身用*this
void test02()
{
	Person p1(10);
	Person p2(10);
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄" << p2.age << endl;
}
int main()
{
	//test01();
	test02();
}
