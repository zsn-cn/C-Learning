#include "Computer.h"

void IntelCPU::single_calculate()
{
	cout << "IntelCPU single_calculate" << endl;
}

void AMDCPU::single_calculate()
{
	cout << "AMDCPU single_calculate" << endl;
}

void IntelGPU::multi_calculate()
{
	cout << "IntelGPU multi_calculate" << endl;
}

void AMDGPU::multi_calculate()
{
	cout << "AMDGPU multi_calculate" << endl;
}

void IntelRAM::storage()
{
	cout << "IntelRAM storage" << endl;
}

void AMDRAM::storage()
{
	cout << "AMDRAM storage" << endl;
}

Computer::Computer(CPU* cpu, GPU* gpu, RAM* ram)
{
	this->m_cpu = cpu;

	this->m_gpu = gpu;

	this->m_ram = ram;
}

Computer::~Computer()
{
	cout << "ComputerÎö¹¹º¯ÊýÖ´ÐÐ" << endl;

	if (m_cpu != nullptr)
	{
		delete m_cpu;
		m_cpu = nullptr;
	}
	if (m_gpu != nullptr)
	{
		delete m_gpu;
		m_gpu = nullptr;
	}
	if (m_ram != nullptr)
	{
		delete m_ram;
		m_ram = nullptr;
	}
}

void Computer::run_computer()
{
	this->m_cpu->single_calculate();

	this->m_gpu->multi_calculate();

	this->m_ram->storage();
}
