#include<iostream>
using namespace std;
//��Ա�����ͳ�Ա�����ֿ��洢��ֻ�зǾ�̬��Ա����������Ķ�����

class Person {

	int m_A;//������Ķ�����
	static int m_B;//��������Ķ�����
	void func();//��������Ķ�����
	static void func2() {};

};
int Person::m_B = 10;
void test01()
{
	Person p;
	//�ն���ռ���ڴ�ռ�:1
	//C++��������Ϊ�ն������һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	cout << sizeof(p) << endl;//��Ķ�����ڴ��С
}
int main()
{
	test01();
	
}