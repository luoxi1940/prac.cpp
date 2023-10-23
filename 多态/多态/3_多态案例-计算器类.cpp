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
		//������չ�µĹ��ܣ���Ҫ�޸�Դ��
		//����ʱ�Ŀ����У��ᳫ �ر�ԭ��
		//�ر�ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
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
//���ö�̬ʵ�ּ�����
// ��̬�ô���
// 1.��֯�ṹ����
// 2.�ɶ���ǿ
// 3.����ǰ�ںͺ�����չ��ά���Ը�
//ʵ�ּ�����������
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
//�ӷ�������
class Add :public Abstract
{
public:
	 int getResult()
	{
		return m_Num1+m_Num2;
	}
};
//����
class Sub :public Abstract
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//�˷�
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
	Abstract* abc = new Add;//�����ָ��ָ������
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->getResult() << endl;
	//�����ǵ�����(���������ݣ�
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