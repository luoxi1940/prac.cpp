#include <iostream>
using namespace std;
//抽象类
//1.无法实例化对象
//2.抽象类的子类，必须要重写父类中的纯虚函数，否则也无法实例化对象
class Base//抽象类
{
public:
	virtual void func() = 0;
};
class Son :public Base
{
public:
	 void func()
	{
		 cout << "funcSon的调用" << endl;
	}
};
void test01()
{
	//Base b;不可行
	//Son s1;
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
}