#include <iostream>
using namespace std;
#include <fstream>
//ofstream:写文件
//ifstream:读文件
//fstream:读写文件
//1.包含头文件
// #include<fstream>
// 2.创建流对象
// ofstream ofs;
// 3.指定打开文件并判断文件是否打开成功
// ofs.open("文件路径”，打开方式）
// 4.写数据
// ofs<<“写入的数据”；
//5.关闭文件
//ofs.close()
//文本文件 写文件
void test01()
{
	ofstream ofs;
	ofs.open("text.txt", ios::out);
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;
	ofs.close();
}
int main()
{
	test01();
}