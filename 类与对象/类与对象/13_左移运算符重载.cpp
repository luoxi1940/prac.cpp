#include<iostream>
using namespace std;
class Person
{
public:
	Person(){}
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
	/*void operator<<(Person& p) {

	}*/
	int m_A;
	int m_B;

};
ostream& operator<<(ostream&cout, Person&p)//±¾ÖÊoperator<<(cout,p)¼ò»¯cout<<p
{
	cout << p.m_A << " " << p.m_B << endl;
	return cout;
}
void test01()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;
	cout << p << endl;
}
int main()
{
	test01();
}