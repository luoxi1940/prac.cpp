#include <iostream>
using namespace std;
class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	//virtual ~Animal()//������
	//{
	//	cout << "Animal������������" << endl;
	//}
	//������������Ҫ����Ҳ��Ҫʵ��
	//���˴��������������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal () = 0;//��������
	virtual void speak() = 0;//���麯��
};
Animal::~Animal()
{
	cout << "Animal����������������" << endl;
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		m_name = new string(name);
	}
	virtual void speak()
	{
		cout <<*m_name<< "Сè��˵��" << endl;
	}
	~Cat()
	{
		if (m_name != NULL)
		{
			cout << "Cat������������" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string* m_name;
};
void test01()
{
	Animal* ani = new Cat("Tom");
	ani->speak();
	//����ָ��������ʱ�򣬲������������������������������������ж������ݣ�������ڴ�й¶����-��ʹ��������
	delete ani;
}
int main()
{
	test01();
}