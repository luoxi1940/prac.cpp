#include<iostream>
using namespace std;
//��ָ����ó�Ա����
class Person
{
public:
	void showClassName()
	{
		cout << "Person��" << endl;
	}
	void showPersonAge()
	{//����ԭ���Ǵ����ָ����ΪNULL
		if (this == NULL)
		{
			return;
		}
		cout << "age=" << this->m_age << endl;
	}
	int m_age;
};
void test01()
{
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main()
{
	test01();
}