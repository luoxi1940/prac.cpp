#include <iostream>
using namespace std;
//��̬��̬���������غ����������
//��̬��̬����������麯��ʵ������ʱ��̬
//��̬��̬�ĺ�����ַ��� ����׶�ȷ��������ַ
//��̬��̬�ĺ�����ַ��� ���н׶�ȷ��������ַ
class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};
class Cat :public Animal
{
public:
	void speak()
	{
			cout << "Сè��˵��" << endl;
	}
};
//��̬��̬�ĺ�����ַ��� ����׶�ȷ��������ַ
void dospeak(Animal&animal )
{
	animal.speak();
}
void test01()
{
	Cat cat;
	dospeak(cat);
}
//������è˵�������õ�ַ���//virtual
//��̬��̬����������
//1.�м̳й�ϵ
//2.����Ҫ��д������麯������������ֵ���ͣ��������ƣ������б���ȫ��ͬ�������virtual��д�ɲ�д�������д
//��̬��̬ʹ��
//�����ָ�������ָ������Ķ���
int main()
{
	test01();
}