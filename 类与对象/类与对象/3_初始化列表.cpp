#include<iostream>
using namespace std;
//���캯������������1��ֵ1��������2��ֵ2��...{}
//��ʼ���б�
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