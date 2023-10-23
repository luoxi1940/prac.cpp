#include <iostream>
using namespace std;
class Abstract
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void Pour() = 0;
	virtual void PutSomething() = 0;
	void make()
	{
		Boil();
		Brew();
		Pour();
		PutSomething();
	}
};
class Coffee :public Abstract
{
	virtual void Boil()
	{
		cout << "ÖóÅ©·òÉ½Èª" << endl;
	}
	virtual void Brew()
	{
		cout << "³åÅÝ¿§·È" << endl;
	}
	virtual void Pour()
	{
		cout << "µ¹Èë±­ÖÐ" << endl;
	}
	virtual void PutSomething()
	{
		cout << "¼ÓÈëÌÇºÍÅ£ÄÌ" << endl;
	}
};
class Tea :public Abstract
{
	virtual void Boil()
	{
		cout << "Öó¿óÈªË®" << endl;
	}
	virtual void Brew()
	{
		cout << "µ¹Èë²èÒ¶" << endl;
	}
	virtual void Pour()
	{
		cout << "µ¹Èë±­ÖÐ" << endl;
	}
	virtual void PutSomething()
	{
		cout << "¼ÓÈëèÛè½" << endl;
	}
};
void dowork(Abstract*abs)
{
	abs->make();
	//delete abs;
}
void test01()
{
	//ÖÆ×÷¿§·È
	/*Coffee coffee;
	dowork(coffee);
	cout << "---------------------" << endl;
	Tea tea;
	dowork(tea);*/
	dowork(new Coffee);
	cout << "---------------------" << endl;
	dowork(new Tea);
}
int main()
{
	test01();
}