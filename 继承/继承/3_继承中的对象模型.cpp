#include <iostream>
using namespace std;
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base
{
public:
	int m_D;
};
//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷���E
//��ת�ļ�·�� cd ����·����
//cl /d1 reportSingleClass���� �ļ�����tap��
void test01()
{
	Son1 s1;
	//���������зǾ�̬��Ա���ᱻ����̳�
	//������˽�����Գ�Ա �Ǳ������������ˣ�����Ƿ��ʲ����ģ�����ȷ���̳���ȥ��
	cout << sizeof(s1) << endl;
}
int main()
{
	test01();
}