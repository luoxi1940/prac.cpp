#include <iostream>
using namespace std;

//ʵ����ͨҳ��

////javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "javaѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//�̳�ʵ��ҳ��
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java,Python,C++...�����������б�" << endl;
	}
};
//����ҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "pythonѧ����Ƶ" << endl;
	}
};
class Cpp :public BasePage
{
public:
	void content()
	{
		cout << "c++ѧ����Ƶ" << endl;
	}
};
class Java :public BasePage
{
public:
	void content()
	{
		cout << "javaѧ����Ƶ" << endl;
	}
};
void test01()
{
	cout << "java������Ƶҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "---------------------------------------------" << endl;
	cout << "python������Ƶҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "---------------------------------------------" << endl;
	cout << "C++������Ƶҳ�����£�" << endl;
	Cpp c;
	c.header();
	c.footer();
	c.left();
	c.content();
}
int main()
{
	test01();
}