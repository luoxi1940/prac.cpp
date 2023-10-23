#include <iostream>
using namespace std;
//
class Caculater
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//若想扩展新的功能，需要修改源码
		//在真时的开发中，提倡 关闭原则
		//关闭原则：对扩展进行开放，对修改进行关闭
	}
	int m_Num1;
	int m_Num2;

};
void test01()
{
	Caculater c;
	c.m_Num1 = 10;
	c.m_Num2 = 20;
	cout << c.getResult("+") << endl;
	cout << c.getResult("-") << endl;
	cout << c.getResult("*") << endl;
}
//利用多态实现计算器
// 多态好处：
// 1.组织结构清晰
// 2.可读性强
// 3.对于前期和后期扩展和维护性高
//实现计算器抽象类
class Abstract
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//加法计算器
class Add :public Abstract
{
public:
	 int getResult()
	{
		return m_Num1+m_Num2;
	}
};
//减法
class Sub :public Abstract
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法
class Mul :public Abstract
{
public:
	int getResult()
	{
		return m_Num1 *m_Num2;
	}
};
void test02()
{
	Abstract* abc = new Add;//父类的指针指向子类
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->getResult() << endl;
	//用完后记得销毁(堆区的数据）
	delete abc;
	abc = new Sub;
	abc->m_Num1 = 100;
	abc->m_Num2 = 200;
	cout << abc->getResult() << endl;
	delete abc;
	abc = new Mul;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->getResult() << endl;
}
int main()
{
	//test01();
	test02();
}