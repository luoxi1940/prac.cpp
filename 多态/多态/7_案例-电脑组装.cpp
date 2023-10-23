#include <iostream>
using namespace std;
class CPU
{
public:
	virtual void caculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;//��ʾ
};
class Memory
{
public:
	virtual void storage() = 0;//�洢
};
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->caculate();
		m_vc->display();
		m_mem->storage();
	}
	//�ṩ��������
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	//���
	CPU* m_cpu;
	VideoCard*m_vc;
	Memory* m_mem;
};
//���峧��
class IntelCPU :public CPU
{
public:
	virtual void caculate()
	{
		cout << "IntelCPU��ʼ����" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel�Կ���ʼ��ʾ" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel�ڴ�����ʼ�洢" << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	virtual void caculate()
	{
		cout << "LenovoCPU��ʼ����" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo�Կ���ʼ��ʾ" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo�ڴ�����ʼ�洢" << endl;
	}
};
void test01()
{
	//��һ̨�������
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;
	//������һ̨����
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;
	//�ڶ�̨������װ
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
}
int main()
{
	test01();
}