#include <iostream>
using namespace std;
class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	//virtual ~Animal()//虚析构
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}
	//纯虚析构：需要声明也需要实现
	//有了纯虚析构后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal () = 0;//纯虚析构
	virtual void speak() = 0;//纯虚函数
};
Animal::~Animal()
{
	cout << "Animal纯虚析构函数调用" << endl;
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_name = new string(name);
	}
	virtual void speak()
	{
		cout <<*m_name<< "小猫在说话" << endl;
	}
	~Cat()
	{
		if (m_name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
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
	//父类指针在析构时候，不会调用子类中析构函数，导致子类中如果有堆区数据，会出现内存泄露现象-》使用虚析构
	delete ani;
}
int main()
{
	test01();
}