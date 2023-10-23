#include<iostream>
using namespace std;
//构造函数（）：属性1（值1），属性2（值2）...{}
//初始化列表
class Person
{
public:
	/*Person(int a, int b, int c)
	{
		ma = a; mb = b; mc = c;
	}*/
	Person(int a,int b,int c) :ma(a), mb(b), mc(c)
	{
	}
	int ma, mb, mc;
};
void test01()
{
	/*Person p(1, 2, 3);*/
	Person p(10,20,30);
	cout << p.ma<<endl;
	cout << p.mb << endl;
	cout << p.mc << endl;
}
int main()
{
	test01();
}