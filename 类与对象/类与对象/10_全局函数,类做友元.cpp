#include<iostream>
using namespace std;
//��Ԫ��ʵ�ַ�ʽ��ȫ�ֺ������ࣻ��Ա����

class Building
{
	friend class Goodgay;
	//goodGayȫ�ֺ����ɷ���Bilding��˽��
	friend void goodGay(Building* building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
	string m_SittingRoom;//����
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
	cout << "Goodgay���ڷ���" << building->m_SittingRoom << endl;
	cout << "Goodgay���ڷ���" << building->m_BedRoom << endl;
}
//ȫ�ֺ���
void goodGay(Building* building)
{
	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;
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