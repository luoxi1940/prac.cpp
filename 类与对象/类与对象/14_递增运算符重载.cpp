#include<iostream>
using namespace std;
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger& myint);
public:
	MyInteger()
	{
		m_Num=0;
	}
	//重载前置++运算符
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}
	//重载后置++运算符
	MyInteger& operator++(int)//int代表占位参数，用于区分前后置
	{
		MyInteger *temp = this;
		m_Num++;
		return *temp;
	}
private:
	int m_Num;
};
//重置左移运算符
ostream& operator<<(ostream& cout, MyInteger& myint)
{
	cout << "myint.m_Num=" << myint.m_Num << endl;
	return cout;
}


void test01()
{
	MyInteger myint;
	cout <<++(++myint) << endl;
	cout << myint << endl;
}
void test02()
{
	MyInteger myint;
	cout <<(myint++)++<< endl;
}
int main()
{
	test01();
	test02();
	
}