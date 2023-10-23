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
//利用开发人员命令提示工具查看对象模型
//跳转盘符：E
//跳转文件路径 cd 具体路径下
//cl /d1 reportSingleClass类名 文件名（tap）
void test01()
{
	Son1 s1;
	//父类中所有非静态成员都会被子类继承
	//父类中私有属性成员 是被编译器隐藏了，因此是访问不到的，但的确被继承下去了
	cout << sizeof(s1) << endl;
}
int main()
{
	test01();
}