#include <iostream>
using namespace std;
//静态多态：函数重载和运算符重载
//动态多态：派生类和虚函数实现运行时多态
//静态多态的函数地址早绑定 编译阶段确定函数地址
//动态多态的函数地址晚绑定 运行阶段确定函数地址
class Animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
class Cat :public Animal
{
public:
	void speak()
	{
			cout << "小猫在说话" << endl;
	}
};
//静态多态的函数地址早绑定 编译阶段确定函数地址
void dospeak(Animal&animal )
{
	animal.speak();
}
void test01()
{
	Cat cat;
	dospeak(cat);
}
//若想让猫说话，需让地址晚绑定//virtual
//动态多态满足条件：
//1.有继承关系
//2.子类要重写父类的虚函数：函数返回值类型，函数名称，参数列表，完全相同。子类的virtual可写可不写，父类必写
//动态多态使用
//父类的指针或引用指向子类的对象
int main()
{
	test01();
}