#include<iostream>
using namespace std;
//���������������ڲ����޸ĳ�Ա���ԣ���Ա�����������mutable,�ڳ������п��޸�
//��������������ǰ��const;������ֻ�ܵ��ó�����
class Person
{
public:
	//thisָ��ı��ʣ���ָ�볣����ָ�򲻿��޸�
	//const Person *const this//��thisָ��ָ���ֵҲ�����޸�
	void showPerson()const
	{
		//this->m_A = 100;
		//this->NULL;
		this->m_B = 100;
	}
	void func() {}
	int m_A;
	mutable int m_B;//�������
};
void test01()
{
	Person p;
	p.showPerson();
}
//������
void test02()
{
	const Person p;
	p.m_B = 300;//m_B������ֵ���ڳ�������Ҳ���޸�
	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func(); //������
}

int main()
{
	test01();
	test02();
}