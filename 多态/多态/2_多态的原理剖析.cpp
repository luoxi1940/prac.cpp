#include <iostream>
using namespace std;
class Animal
{
public:
	 virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};
class Cat :public Animal
{
public:
	/*void speak()
	{
		cout << "Сè��˵��" << endl;
	}*/
};
void test01()
{
	cout << sizeof(Animal) << endl;//1(���ࣩ//x86 4(ָ�룩
}
int main()
{
	test01();
}