#include <iostream>
using namespace std;
#include<fstream>
//д�ļ�
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	//����ͷ�ļ�
	//�������������
	ofstream ofs("person.txt", ios::out | ios::binary);
	//ofs.open();
	Person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}
int main()
{
	test01();
}