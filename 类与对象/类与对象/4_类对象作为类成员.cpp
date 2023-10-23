#include<iostream>
using namespace std;
class Phone
{
public:
	Phone(string pname)
	{
		cout << "Phone构造函数" << endl;
		m_Pname = pname;
	}

	string m_Pname;//手机名
	~Phone()
	{
		cout << "Phone析构" << endl;
	}
};
class Person
{
public:
	//Phone m_Phone=pname//隐式转换法
	Person(string name, string pname):m_name(name),m_Phone(pname){
		cout << "Person构造函数" << endl;
	}

	string m_name;
	Phone m_Phone;
	~Person()
	{
		cout << "Person析构" << endl;
	}
};
//其他类对象作为本类成员时，构造时先构造类对象，在构造自身
//析构顺序与构造相反
void  test01()
{
	Person p("张三", "苹果MAX");
	cout << p.m_name << "  " << p.m_Phone.m_Pname<<endl;

}
int main()
{
	test01();
}