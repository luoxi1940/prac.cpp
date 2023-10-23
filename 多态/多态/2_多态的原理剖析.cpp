#include <iostream>
using namespace std;
class Animal
{
public:
	 virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
class Cat :public Animal
{
public:
	/*void speak()
	{
		cout << "小猫在说话" << endl;
	}*/
};
void test01()
{
	cout << sizeof(Animal) << endl;//1(空类）//x86 4(指针）
}
int main()
{
	test01();
}