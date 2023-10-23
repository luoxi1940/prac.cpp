#include<iostream>
using namespace std;
//成员变量和成员函数分开存储，只有非静态成员变量属于类的对象上

class Person {

	int m_A;//属于类的对象上
	static int m_B;//不属于类的对象上
	void func();//不属于类的对象上
	static void func2() {};

};
int Person::m_B = 10;
void test01()
{
	Person p;
	//空对象占用内存空间:1
	//C++编译器会为空对象分配一个字节空间，是为了区分空对象占内存的位置
	cout << sizeof(p) << endl;//类的对象的内存大小
}
int main()
{
	test01();
	
}