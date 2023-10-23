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
		cout << "��ũ��ɽȪ" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void Pour()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};
class Tea :public Abstract
{
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "�����Ҷ" << endl;
	}
	virtual void Pour()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�������" << endl;
	}
};
void dowork(Abstract*abs)
{
	abs->make();
	//delete abs;
}
void test01()
{
	//��������
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