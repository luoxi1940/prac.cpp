#include<iostream>
using namespace std;
//��̬��Ա���������ж�����һ�����ݣ��ڱ���׶η����ڴ棻���������������ʼ��
//��̬��Ա���������ж�����һ����������̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	static int m_A;//��������
	static void func()
	{
		m_A = 300;//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		//m_C = 400;//���ɷ���
		cout << "static func����" << endl;
	}
	int m_C;


private://��̬��Ա����Ҳ�з���Ȩ��
	static int m_B;
};
int Person::m_A = 100;//�����ʼ��
int Person::m_B = 200;
void test01()
{
	Person p;
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;//����
}
void test02()
{
	//��̬��Ա������������ĳ�������ϣ����ж�����һ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ
	//1.ͨ���������
	Person p;
	cout << p.m_A << endl;
	//2.ͨ����������
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;
}
void test03()
{
	//1.ͨ������
	Person b;
	b.func();
	//2.ͨ������
	Person::func();
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}