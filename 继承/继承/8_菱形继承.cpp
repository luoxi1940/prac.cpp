#include <iostream>
using namespace std;
//动物
class Animal
{
public:
	int m_age;
};
//利用虚继承可以解决菱形继承资源浪费问题
//继承时加上关键字virtual(虚基类）
//虚继承后，该份数据只有一份，即共享
//vpbtr(虚基类指针） vbtable(虚基列表）
class Sheep :virtual public Animal
{

};
class Tuo :virtual public Animal
{

};
class SheepTuo :public Sheep, public Tuo
{

};
void test01()
{
	SheepTuo st;
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 28;
	cout << st.Sheep::m_age << endl;
	cout << st.Tuo::m_age << endl;
	//年龄数据只需一份即可，菱形继承导致数据资源浪费
	cout << st.SheepTuo::m_age << endl;
	cout << st.m_age << endl;
}
int main()
{
	test01();
}