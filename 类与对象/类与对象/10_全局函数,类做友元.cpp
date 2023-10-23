#include<iostream>
using namespace std;
//友元的实现方式：全局函数；类；成员函数

class Building
{
	friend class Goodgay;
	//goodGay全局函数可访问Bilding中私有
	friend void goodGay(Building* building);
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;
};
class Goodgay
{
public:
	Goodgay();
	void visit() ;
	
	Building *building;
};
Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit()
{
	cout << "Goodgay正在访问" << building->m_SittingRoom << endl;
	cout << "Goodgay正在访问" << building->m_BedRoom << endl;
}
//全局函数
void goodGay(Building* building)
{
	cout << "好基友全局函数正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友全局函数正在访问：" << building->m_BedRoom << endl;
}
void test01()
{
	Building building;
	goodGay(&building);
}
void test02()
{
	Goodgay gg;
	gg.visit();
}

int main()
{
	//test01();
	test02();
}