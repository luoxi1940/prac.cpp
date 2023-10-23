#include <iostream>
using namespace std;
#include<fstream>
//写文件
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	//包含头文件
	//创建输出流对象
	ofstream ofs("person.txt", ios::out | ios::binary);
	//ofs.open();
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}
int main()
{
	test01();
}