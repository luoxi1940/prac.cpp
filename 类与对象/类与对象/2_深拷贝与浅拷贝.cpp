#include<iostream>
using namespace std;
//ǳ�������򵥵ĸ�ֵ��������
//������ڶ�����������ռ䣬���п�������
//ʹ�ñ������Ŀ�������������ǳ��������
class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ���" << endl;
	}
	Person(int age, int height)
	{
		mage = age;
		mheight = new int(height);
		cout << "�вι���" << endl;
	}

	/*Person(const Person &p)
	{
		mage = p.mage;
		mheight = p.mheight;
		cout << "��������" << endl;
	}*/
	//�Լ�ʵ�ֿ������캯��
	Person(const Person& p)
	{
		mage = p.mage;
		cout << "Person��������" << endl;
		//mheight = p.mheight; ������Ĭ��ʵ�ֵ������ִ���
		//���
		mheight = new int(*p.mheight);//�¿��ٳ�һ���ڴ�ռ�//������
	}
	~Person()
	{
		//�������룬���������ٵ��������ͷŵĲ���
		/*if��mheight != NULL)
		{
			delete mheight;
			mheight = NULL;
		}*/
		cout << "��������" << endl;
	}
	int mage;
	int* mheight;
};
void test01()
{
	Person p1(18,160);
	cout << p1.mage <<"  "<< *p1.mheight << endl;
	Person p2(p1);
	cout << p2.mage <<"  "<< *p2.mheight << endl;
}
int main()
{
	test01();
}