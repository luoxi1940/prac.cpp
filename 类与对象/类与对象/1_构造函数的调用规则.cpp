#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "默认构造" << endl;
	};
	Person(int age)
	{
		mage = age;
		cout << "有参构造" << endl;
	}
	//自己的高级函数会屏蔽编译器的低级函数
	//Person(const Person &p)
	//{
		//mage = p.mage;
		//cout << "拷贝构造" << endl;
	//}
	~Person()
	{
		cout << "析构构造" << endl;
	}
	int mage;


};
void test01()
{
	Person p;
	p.mage = 18;
	Person p2(p);
	cout << p2.mage<<endl;;
}

int main()
{
	test01();
}