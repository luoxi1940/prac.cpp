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
	virtual void display() = 0;//显示
};
class Memory
{
public:
	virtual void storage() = 0;//存储
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
	//提供工作的函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->caculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供析构函数
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
	//零件
	CPU* m_cpu;
	VideoCard*m_vc;
	Memory* m_mem;
};
//具体厂商
class IntelCPU :public CPU
{
public:
	virtual void caculate()
	{
		cout << "IntelCPU开始计算" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel显卡开始显示" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel内存条开始存储" << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	virtual void caculate()
	{
		cout << "LenovoCPU开始计算" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo显卡开始显示" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo内存条开始存储" << endl;
	}
};
void test01()
{
	//第一台电脑零件
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;
	//第二台电脑组装
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
}
int main()
{
	test01();
}