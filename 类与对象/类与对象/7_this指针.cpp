#include<iostream>
using namespace std;
//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ�룺
// ���β����Ա����ͬ��ʱ������thisָ�����֣�
//����ķǾ�̬��Ա�����з��ض���������return*this
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
		//this��ָ��p2��ָ�룬*thisָ�����p2
		return *this;
	}
};
//1.������Ƴ�ͻ
void test01()
{
	Person p1(18);
	cout << p1.age << endl;

}
//���ض�������*this
void test02()
{
	Person p1(10);
	Person p2(10);
	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2������" << p2.age << endl;
}
int main()
{
	//test01();
	test02();
}
