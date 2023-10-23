#include<iostream>
using namespace std;
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作
//使用编译器的拷贝函数，会做浅拷贝操作
class Person
{
public:
	Person()
	{
		cout << "默认构造" << endl;
	}
	Person(int age, int height)
	{
		mage = age;
		mheight = new int(height);
		cout << "有参构造" << endl;
	}

	/*Person(const Person &p)
	{
		mage = p.mage;
		mheight = p.mheight;
		cout << "拷贝构造" << endl;
	}*/
	//自己实现拷贝构造函数
	Person(const Person& p)
	{
		mage = p.mage;
		cout << "Person拷贝构造" << endl;
		//mheight = p.mheight; 编译器默认实现的是这种代码
		//深拷贝
		mheight = new int(*p.mheight);//新开辟出一个内存空间//解引用
	}
	~Person()
	{
		//析构代码，将堆区开辟的数据做释放的操作
		/*if（mheight != NULL)
		{
			delete mheight;
			mheight = NULL;
		}*/
		cout << "析构构造" << endl;
	}
	int mage;
	int* mheight;
};
void test01()
{
	Person p1(18,160);
	cout << p1.mage <<"  "<< *p1.mheight << endl;
	Person p2(p1);
	cout << p2.mage <<"  "<< *p2.mheight << endl;
}
int main()
{
	test01();
}