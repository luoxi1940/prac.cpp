#include <iostream>
using namespace std;
//����
class Animal
{
public:
	int m_age;
};
//������̳п��Խ�����μ̳���Դ�˷�����
//�̳�ʱ���Ϲؼ���virtual(����ࣩ
//��̳к󣬸÷�����ֻ��һ�ݣ�������
//vpbtr(�����ָ�룩 vbtable(����б�
class Sheep :virtual public Animal
{

};
class Tuo :virtual public Animal
{

};
class SheepTuo :public Sheep, public Tuo
{

};
void test01()
{
	SheepTuo st;
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 28;
	cout << st.Sheep::m_age << endl;
	cout << st.Tuo::m_age << endl;
	//��������ֻ��һ�ݼ��ɣ����μ̳е���������Դ�˷�
	cout << st.SheepTuo::m_age << endl;
	cout << st.m_age << endl;
}
int main()
{
	test01();
}