#include <iostream>
using namespace std;
class Person
{
public:
	int m_A;
	int m_B;
	/*Person operator+(Person& p)
	{
		Person term;
		term.m_A = this->m_A + p.m_A;
		term.m_B = this->m_B + p.m_B;
		return term;
	}*/
};
Person operator+(Person& p1, Person& p2)
{
	Person term;
	term.m_A = p1.m_A + p2.m_A;
	term.m_B = p1.m_B + p2.m_B;
	return term;
}
Person operator+(Person& p1, int num)
{
	Person term;
	term.m_A = p1.m_A +num;
	term.m_B = p1.m_B +num;
	return term;
}
void test01()
{
	Person p1, p2, p3;
	p1.m_A = 10;
	p1.m_B = 10;
	p2.m_A = 20;
	p2.m_B = 20;
	p3 = p1 + p2;
	
	cout << p3.m_A << endl;
}
int main()
{
	test01();
}