#include <iostream>
using namespace std;
#include <fstream>
//ofstream:д�ļ�
//ifstream:���ļ�
//fstream:��д�ļ�
//1.����ͷ�ļ�
// #include<fstream>
// 2.����������
// ofstream ofs;
// 3.ָ�����ļ����ж��ļ��Ƿ�򿪳ɹ�
// ofs.open("�ļ�·�������򿪷�ʽ��
// 4.д����
// ofs<<��д������ݡ���
//5.�ر��ļ�
//ofs.close()
//�ı��ļ� д�ļ�
void test01()
{
	ofstream ofs;
	ofs.open("text.txt", ios::out);
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	ofs.close();
}
int main()
{
	test01();
}