#include<iostream>
using namespace std;
class MyPrint
{
public:
	void operator()(string text)//��Ϊ�º���
	{
		cout << text << endl;
	}
	
};
void MyPrint02(string text)
	{
		cout << text << endl;
	}
void test01()
{
	MyPrint myprint;
	myprint("hello world");
	MyPrint02("hello world");
}
//�º����ǳ���û�й̶���д��
//�ӷ���
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	MyAdd myadd;
	int ret=myadd(100, 100);
	cout << ret << endl;
	//������������
	cout << MyAdd()(100,200) << endl;
}
int main()
{
	test01();
	test02();
}