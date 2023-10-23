#include <iostream>
using namespace std;

//实现普通页面

////java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "java学科视频" << endl;
//	}
//};
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "python学科视频" << endl;
//	}
//};
////C++页面
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//继承实现页面
class BasePage
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java,Python,C++...（公共分类列表）" << endl;
	}
};
//各个页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "python学科视频" << endl;
	}
};
class Cpp :public BasePage
{
public:
	void content()
	{
		cout << "c++学科视频" << endl;
	}
};
class Java :public BasePage
{
public:
	void content()
	{
		cout << "java学科视频" << endl;
	}
};
void test01()
{
	cout << "java下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "---------------------------------------------" << endl;
	cout << "python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "---------------------------------------------" << endl;
	cout << "C++下载视频页面如下：" << endl;
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